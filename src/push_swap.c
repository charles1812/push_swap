/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cspreafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:28:59 by cspreafi          #+#    #+#             */
/*   Updated: 2023/09/18 14:29:03 by cspreafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdlib.h>
#include <unistd.h>

int	ft_double_checks(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i <= argc)
	{
		j = i + 1;
		while (j <= argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_double_checks2(int argc, char **argv)
{
	int	i;
	int	j;
	int	res;

	i = 0;
	j = 0;
	res = 1;
	while (i != argc)
	{
		j = i + 1;
		while (j != argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_sort(struct s_list *list)
{
	if (list->len <= 3)
		ft_tre_sorter(list);
	else if (list->len <= 5)
		ft_five_sorter(list);
	else if (list->len <= 100)
		ft_hundred_sorter(list);
	else if (list->len > 100)
		ft_fivehundred_sorter(list);
}

int	ft_count_num(char **argv)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	while (argv[1][i])
	{
		if (argv[1][i] == ' ')
			res = res + 1;
		i++;
	}
	return (res);
}

int	main(int argc, char **argv)
{
	struct s_list	*s_list;
	int				i;

	i = 0;
	s_list = malloc(sizeof(struct s_list));
	if (s_list == NULL)
		return (0);
	if (argc == 2)
	{
		if (ft_count_num(argv) > 1)
		{
			s_list->fkargv = ft_split(argv[1], ' ');
			argc = ft_count_num(argv);
			ft_impile2(argc, s_list->fkargv, s_list);
			if (ft_double_checks2(argc, s_list->fkargv) == 0)
			{
				write(1, "error\n", 6);
				return (0);
			}
			ft_sort(s_list);
			free(s_list->pa);
			free(s_list->pb);
		}
		else
			return (1);
	}
	else if (argc > 2)
	{
		if (ft_alpha_check(argc, argv) == 0)
		{
			write(1, "error\n", 6);
			return (0);
		}
		if (ft_double_checks(argc, argv) == 0)
		{
			write(1, "error\n", 6);
			return (0);
		}
		ft_impile(argc, argv, s_list);
		ft_sort(s_list);
		free(s_list->pa);
		free(s_list->pb);
	}
	return (1);
}
