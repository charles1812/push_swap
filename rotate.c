#include "push_swap.h"

void	ft_rotateA(struct list *list)
{
	int	i;
	int	tmp;
	int	save;

	i = list->iA;
	save = list->pA[list->iA];
	while (i > 0)
	{
		list->pA[i] = list->pA[i - 1];
		i--;
	}
	list->pA[0] = save;
	list->res += 1;
}

void    ft_rotateB(struct list *list)
{
        int     i;
        int     tmp;
        int     save;

        i = list->iB;
        save = list->pB[list->iB];
        while (i > 0)
        {
                list->pB[i] = list->pB[i - 1];
                i--;
        }
        list->pB[0] = save;
	list->res += 1;
}

void	ft_rr(struct list *list)
{
	ft_rotateA(list);
	ft_rotateB(list);
	list->res += 2;
}


