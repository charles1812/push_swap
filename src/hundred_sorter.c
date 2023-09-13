#include "../push_swap.h"
#include <stdlib.h>
#include <unistd.h>


void     ft_find_scaleH(struct list *list)
{
    int     i;
    int     j;

    i = 2;
    j = 0;
    while(i <= 10 && i < (list->len / 4))
    {
        if(list->len % i == 0)
            j = i;
        i++;
    }
    if(j == 0)
        j = 6;
    list->scale = list->len / j;
    list->stack = list->scale;
}


void    ft_put_closeH(struct list *list, int j, int i)
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

void    ft_find_closeH(struct list *list)
{
    int     i;
    int     j;

    j = list->iA;
    i = 0;
    while(list->pA[j] > list->stack)
        j--;
    while(list->pA[i] > list->stack)
        i++;
    ft_put_closeH(list, j, i);
}


void    ft_put_closeAH(struct list *list, int i, int j)
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
            if (i > 1)
                ft_rotateB(list);
            else
                ft_swapB(list); 
            i--;
        }
    }
    ft_pushA(list);
}

void    ft_find_closeAH(struct list *list)
{
    int     i;
    int     j;

    j = list->iB;
    i = 0;
    while (list->pB[i] != list->lenB)
        i++;
    while (list->pB[j] != list->lenB)
        j--;
    ft_put_closeAH(list, i, j);
}

void    ft_hundred_sorter(struct list *list)
{
    int     sorted;
    int     secur;

    secur = 0;
    sorted = 0;
    ft_find_scaleH(list);
    while(secur != 2)
    {
        while(sorted + 1 <= list->stack)
        {
            ft_find_closeH(list);
            sorted++;
        }
        list->stack += list->scale;
        if (list->stack >= list->len)
        {
            list->stack = list->len;
            secur++;
        }
    }
    while (list->lenB != 0)
        ft_pushA(list);
        //ft_find_closeAH(list);
}
