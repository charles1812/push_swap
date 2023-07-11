#include "push_swap.h"

void    ft_swapA(struct list *list)
{
        int     tmp;
	int	len;

	if (list->lenA == 1 || list->iA == 0)
		return ;
	len = list->lenA - 1;
        tmp = list->pA[len];
        list->pA[len] = list->pA[len - 1];
        list->pA[len - 1] = tmp;
	list->res += 1;
}

void    ft_swapB(struct list *list)
{
        int     tmp;
	int	len;

	if (list->lenB == 1 || list->iB == 0)
                return ;
	len = list->lenB - 1;
        tmp = list->pB[len];
        list->pB[len] = list->pB[len - 1];
        list->pB[len - 1] = tmp;
	list->res += 1;
}

void    ft_ss(struct list *list)
{
        ft_swapA(list);
        ft_swapB(list);
	list->res += 2;
}

