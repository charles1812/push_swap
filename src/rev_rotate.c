#include "../push_swap.h"

void    ft_rev_rotateA(struct list *list)
{
	int     i;
	int     tmp;

	i = list->iA;
	tmp = list->pA[list->iA];
    while (i != 0)
    {
		list->pA[i] = list->pA[i - 1];
		i--;
    }
    list->pA[0] = tmp;
	ft_putstr_fd("rra");
	list->movement += 1;
}

void    ft_rev_rotateB(struct list *list)
{
	int     i;
	int     tmp;

	i = list->iB;
	tmp = list->pB[list->iB];
    while (i != 0)
    {
		list->pB[i] = list->pB[i - 1];
		i--;
    }
    list->pB[0] = tmp;
	ft_putstr_fd("rrb");
	list->movement += 1;
}



void    ft_rrr(struct list *list)
{
	ft_rev_rotateA(list);
	ft_rev_rotateB(list);
}

