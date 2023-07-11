
#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>

int	ft_check(struct list *list)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (i < list->iA)
	{
		j = i + 1;
		while(list->pA[j] != '\0' && j <= list->len)
		{
			if (list->pA[i] == list->pA[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_real_value(char **argv, char *argvi, int argc, struct list *list)
{
	int	j;
	int	res;

	j = 0;
	res = 0;
	while(j < argc)
	{
		if (ft_atoi(argvi) < ft_atoi(argv[j]))
			res++;
		j++;
	}
	res = list->len - res;
	return (res);
}

void    ft_impile(int argc, char **argv, struct list *list)
{
	int	i;
	int	j;

        i = 1;
	j = 0;
        list->len = argc - 1;
        list->lenA = list->len;
        list->lenB = 0;
	list->iA = list->len - 1;
	list->iB = -1;
        list->pA = malloc(sizeof(int) * argc - 1);
        list->pB = malloc(sizeof(int) * argc - 1);
        while(i < argc)
        {
                list->pA[j] = ft_real_value(argv, argv[i], argc, list);
                i++;
		j++;
        }
	list->pA[argc - 1] = ft_real_value(argv, argv[argc - 1], argc, list);
        list->A = &list->pA[0];
        list->B = &list->pB[0];
}



void	ft_sorter(struct list *list)
{
	if (list->pA[list->iA] > list->pA[list->iA - 1])
		ft_swapA(list);
	while (list->pA[list->iA] > list->pA[0])
	{
		if (list->pA[list->iA] > list->pA[list->iA - 1])
			ft_swapA(list);
		if (list->pB[list->iB] < list->pB[0])
			ft_rev_rotateA(list);
		else
                        ft_pushB(list);
	}
	ft_pushB(list);
}

void    ft_sorter2(struct list *list)
{
        if (list->pB[list->iB] < list->pB[list->iB - 1])
                ft_swapB(list);
        while (list->pB[list->iB] < list->pB[0])
        {
                if (list->pB[list->iB] > list->pB[list->iB - 1])
                        ft_swapB(list);
		if (list->pB[list->iB] < list->pB[0])
                	ft_rev_rotateB(list);
		else
			ft_pushA(list);

        }
        ft_pushA(list);
}










/*void	ft_order(struct list *list)
{
	if (list->pA[list->iA - 1] < list->pA[0] && list->pA[list->iA - 1] < list->pA[list->iA])
		ft_swapA(list);
	if (list->pA[0] < list->pA[list->iA - 1] && list->pA[list->iA - 1] < list->pA[list->iA])
}
*/

int	main(int argc,char **argv)
{
	int		i;
	char		*success;
	//const int	error;
	struct	list *list = malloc(sizeof(struct list));

	i = 0;
	if (list == NULL)
		return (0);
	//success = 0;
	//error = "Error";
	//list = malloc;
	//if (argc == 2)
	//	return (succes);
	if (argc > 2)
	{
		ft_impile(argc, argv, list);
		if (ft_check(list) == 0)
			return (0);
		while (list->iA >= 0)
			ft_sorter(list);
		while (list->iB >= 0)
			ft_sorter2(list);
		//ft_real_value(list);
		//ft_rotateA(list);
		//ft_rev_rotateA(list);
		//ft_rev_rotateA(list);
		while (i <= list->iA)
                {
                        printf("%d\n", list->pA[i]);
                        i++;
                }
		//printf("\n\n%d\n", ft_check(list));
		//printf("%d", list->iB);
		//printf("\n\n%d\n", list->lenB);
                printf("\nresult = %d", list->res);
	}
	return (1);
}
