#include "push_swap.h"

void    ft_rev_rotateA(struct list *list)
{
	int     i;
	int     save;

	i = 0;
	save = list->pA[0];
        while (i < list->iA)
        {
		list->pA[i] = list->pA[i + 1];
		i++;
        }
        list->pA[list->iA] = save;
	list->res += 1;
}

void    ft_rev_rotateB(struct list *list)
{
	int     i;
	int     save;

	i = 0;
	save = list->pB[0];
        while (i < list->iB)
        {
		list->pB[i] = list->pB[i + 1];
		i++;
        }
        list->pB[list->iB] = save;
	list->res += 1;
}



void    ft_rrr(struct list *list)
{
	ft_rev_rotateA(list);
	ft_rev_rotateB(list);
	list->res += 2;
}

