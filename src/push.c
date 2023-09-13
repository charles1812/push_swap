#include "../push_swap.h"

void    ft_pushA(struct list *list)
{
        ft_add_A(list);
	list->lenB -= 1;
	list->iB -= 1;
        ft_putstr_fd("pa");
        list->movement += 1;
}

void    ft_pushB(struct list *list)
{
        ft_add_B(list);
	list->lenA -= 1;
        list->iA -= 1;
        ft_putstr_fd("pb");
        list->movement += 1;
}

void    ft_add_A(struct list *list)
{
        int     i;
        int     tmp;

        i = list->iA + 1;
        tmp = list->pB[0];
        while(i != 0)
        {
                list->pA[i] = list->pA[i - 1];
                i--;
        }
        list->pA[0] = tmp;
        list->lenA += 1;
	list->iA += 1;
        i = 0;
        while(i < list->iB)
        {
                list->pB[i] = list->pB[i + 1];
                i++;
        }
}

void    ft_add_B(struct list *list)
{
        int     i;
        int     tmp;

        i = list->iB + 1;
        tmp = list->pA[0];
        while(i != 0)
        {
                list->pB[i] = list->pB[i - 1];
                i--;
        }
        list->pB[0] = tmp;
        list->lenB += 1;
	list->iB += 1;
        i = 0;
        while(i < list->iA)
        {
                list->pA[i] = list->pA[i + 1];
                i++;
        }
}