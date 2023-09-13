#include "../push_swap.h"


void     ft_find_scale(struct list *list)
{
    int     i;
    int     j;

    i = 8;
    j = 0;
    while(i <= 12 && i < (list->len / 4))
    {
        if(list->len % i == 0)
            j = i;
        i++;
    }
    if(j == 0)
        j = 12;
    list->scale = list->len / j;
    list->stack = list->scale;
}

void    ft_put_closeF(struct list *list, int j, int i)
{
    j = list->lenA - j;
    if(i + 1 > j)
    {
        while (j > 0)
        {
            ft_rev_rotateA(list);
            j--;
        }
    }
    else
    {
        while(i != 0)
        {
            if (i > 1)
                ft_rotateA(list);
            else
               ft_swapA(list); 
            i--;
        }
    }
    ft_pushB(list);
}

void    ft_find_closeF(struct list *list)
{
    int     i;
    int     j;

    j = list->iA;
    i = 0;
    while(list->pA[j] > list->stack)
        j--;
    while(list->pA[i] > list->stack)
        i++;
    ft_put_closeF(list, j, i);
}

void    ft_all_B(struct list *list)
{
    int     sorted;
    int     secur;

    secur = 0;
    sorted = 0;
    ft_find_scale(list);
    while(secur != 2)
    {
        while(sorted + 1 <= list->stack)
        {
            ft_find_closeF(list);
            sorted++;
        }
        list->stack += list->scale;
        if (list->stack >= list->len)
        {
            list->stack = list->len;
            secur++;
        }
    }
}

void    ft_put_closeAF(struct list *list, int i, int j)
{
    j = list->lenB - j;
    if ((i + 1) > j)
    {
        while (j > 0)
        {
            ft_rev_rotateB(list);
            j--;
        }
    }
    else
    {
        while (i > 0)
        {
            if (list->pB[0] > list->lenB - 4)
            {
                ft_pushA(list);
                ft_rotateA(list);
                list->test += 1;
            }
            else if (i > 1)
                ft_rotateB(list);
            else if (i != 0)
                ft_swapB(list);
            i--; 
        }
    }
    ft_pushA(list);
}

void    ft_near_friends(struct list *list, int k)
{
    int     k2;

    k = list->iA - k;
    k2 = k + 1;
    while(k2 > 0)
    {
        ft_rev_rotateA(list);
        k2--;
    }
    ft_pushB(list);
    while(k2 < k)
    {
        ft_rotateA(list);
        k2++;
    }
    ft_pushA(list);
    list->test -= 1;
}

void    ft_find_closeAF(struct list *list)
{
    int     i;
    int     j;
    int     k;
    int     tst;
    int     tstv;

    j = list->iB;
    i = 0;
    k = list->iA;
    tst = list->test;
    tstv = (list->lenA - list->test);
    while (list->pB[i] != list->lenB + tst && i < list->iB)
        i++;
    while (list->pB[j] != list->lenB + tst && j > 0)
        j--;
    while (list->pA[k] != list->lenB + tst && k >= tstv && tstv > 0)
        k--;
    if (k >= tstv && list->test != 0)
        ft_near_friends(list, k);
    else
        ft_put_closeAF(list, i, j);
}

void    ft_fivehundred_sorter(struct list *list)
{
    ft_all_B(list);
    list->test = 0;
    list->scale = 15;
    list->stack = list->len;
    while(list->lenB + list->test > 0)
    {
        ft_find_closeAF(list);
        if(list->lenB + list->test  + 1 == list->stack)
        {
            list->stack -= list->scale;
            if(list->stack <= 0)
                list->scale = 0;
        }
    }
}