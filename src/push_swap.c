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

int	ft_count_num(char **argv)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	while (argv[1][i])
	{
		if (argv[1][i] != ' ' && argv[1][i - 1] == ' ')
			res = res + 1;
		i++;
	}
	return (res);
}

void	ft_multiarg(int argc, char **argv, struct s_list *s_list)
{
	if (ft_alpha_check(argc, argv) == 0)
	{
		write(1, "Error\n", 6);
		return ;
	}
	if (ft_double_checks(argc, argv) == 0)
	{
		write(1, "Error\n", 6);
		return ;
	}
	ft_impile(argc, argv, s_list);
	ft_sort(s_list);
}

void	ft_onlyarg(int argc, char **argv, struct s_list *s_list)
{
	s_list->fkargv = ft_split(argv[1], ' ');
	argc = ft_count_num(argv);
	if (ft_alpha_check2(argc, s_list->fkargv) == 0)
	{
		write(1, "Error\n", 6);
		return ;
	}
	if (ft_double_checks2(argc, s_list->fkargv) == 0)
	{
		write(1, "Error\n", 6);
		return ;
	}
	ft_impile2(argc, s_list->fkargv, s_list);
	ft_sort(s_list);
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

int	main(int argc, char **argv)
{
	struct s_list	*s_list;

	s_list = malloc(sizeof(struct s_list));
	if (s_list == NULL)
		return (0);
	if (argc == 2)
	{
		if (ft_count_num(argv) > 1)
			ft_onlyarg(argc, argv, s_list);
	}
	else if (argc > 2)
		ft_multiarg(argc, argv, s_list);
	free(s_list->pa);
	free(s_list->pb);
	free(s_list);
	return (1);
}
