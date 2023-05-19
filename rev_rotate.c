#include "push_swap.h"

void    ft_rev_rotateA(struct list *list)
{
	int     i;
	int     tmp;
	int	tmp2;
	int	save;

	i = list->lenA - 1;
	save = list->pA[0];
	tmp = list->pA[i];
	list->pA[i] = list->pA[i + 1];
	i--;
	while (i > 0 && list->pA[i] != save)
	{
		tmp2 = list->pA[i];
		list->pA[i] = list->pA[i + 1];
		tmp = tmp2;
		i--;
	}
	list->pA[list->lenA] = save;
}

void    ft_rev_rotateB(struct list *list)
{
        int     i;
        int     tmp;
        int     tmp2;
        int     save;

        i = 1;
        save = list-> 
        tmp = 
        while (i < list->lenB && list->pB[i] != save)
        {
	
        }
        list->pB[list->iB] = save;
}



void    ft_rrr(struct list *list)
{
	ft_rev_rotateA(list);
	ft_rev_rotateB(list);
}

