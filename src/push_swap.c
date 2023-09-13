#include "../push_swap.h"
#include <stdlib.h>
#include <unistd.h>

int		ft_is_digit(int c)
{
	if(c >= '0' && c<= '9')
		return (1);
	return(0);
}

int		ft_alpha_check(int argc, char **argv)
{
	int	i;
	int	j;
	
	i = 1;
	j = 0;
	while (i < argc)
	{
		j = 0;
		while(argv[i][j] != '\0')
		{
			if (ft_is_digit(argv[i][j]) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_double_check(struct list *list)
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

int		ft_real_value(char **argv, char *argvi, int argc, struct list *list)
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

void	ft_sort(struct list *list)
{
	if(list->len <= 3)
		ft_tre_sorter(list);
	else if(list->len <= 5)
		ft_five_sorter(list);
	else if(list->len <= 100)
		ft_hundred_sorter(list);
	else if(list->len > 100)
		ft_fivehundred_sorter(list);
}


int		main(int argc, char **argv)
{
	struct	list *list = malloc(sizeof(struct list));
	//
	int		i;

	if (list == NULL)
		return (0);
	if (argc > 2)
	{
		if (ft_alpha_check(argc, argv) == 0)
		{
			write(1, "error\n", 6);
			return (0);
		}
		ft_impile(argc, argv, list);
		if (ft_double_check(list) == 0)
		{
			write(1, "error\n", 6);
			return (0);
		}
		ft_sort(list);
		//free(list->pA);
		//free(list->pB);
		//ft_pushB(list);
		//ft_rev_rotateA(list);
		write (1, "\n", 1);
		i = 0;
		while(list->pA[i] && i <= list->iA)
		{
			printf("%d\n", list->pA[i]);
			i++;
		}
		printf("\n\n\n\nmovement : %d\n\n\n", list->movement);
		/*
		*/
		free(list);
	}
	return (1);
}

