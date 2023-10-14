/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   impile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cspreafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:28:59 by cspreafi          #+#    #+#             */
/*   Updated: 2023/09/18 14:29:03 by cspreafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	j;
	int	result;

	i = 0;
	j = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			j = j * -1;
		}
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * j);
}

int	ft_real_value(char **argv, char *argvi, int argc, struct s_list *s_list)
{
	int	j;
	int	res;

	j = 0;
	res = 0;
	while (j < argc)
	{
		if (ft_atoi(argvi) < ft_atoi(argv[j]))
			res++;
		j++;
	}
	res = s_list->len - res;
	return (res);
}

void	ft_impile(int argc, char **argv, struct s_list *s_list)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	s_list->len = argc - 1;
	s_list->lena = s_list->len;
	s_list->lenb = 0;
	s_list->ia = s_list->len - 1;
	s_list->ib = -1;
	s_list->pa = malloc(sizeof(int) * argc - 1);
	s_list->pb = malloc(sizeof(int) * argc - 1);
	while (i < argc)
	{
		s_list->pa[j] = ft_real_value(argv, argv[i], argc, s_list);
		i++;
		j++;
	}
	s_list->pa[argc - 1] = ft_real_value(argv, argv[argc - 1], argc, s_list);
	s_list->a = &s_list->pa[0];
	s_list->b = &s_list->pb[0];
}

int	ft_real_value2(char **argv, char *argvi, int argc, struct s_list *s_list)
{
	int	j;
	int	res;

	j = 0;
	res = 0;
	while (j < argc)
	{
		if (ft_atoi(argvi) < ft_atoi(argv[j]))
			res++;
		j++;
	}
	res = s_list->len - res;
	return (res);
}

void	ft_impile2(int argc, char **argv, struct s_list *s_list)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	s_list->len = argc;
	s_list->lena = s_list->len;
	s_list->lenb = 0;
	s_list->ia = s_list->len - 1;
	s_list->ib = -1;
	s_list->pa = malloc(sizeof(int) * argc);
	s_list->pb = malloc(sizeof(int) * argc);
	while (i < argc)
	{
		s_list->pa[j] = ft_real_value2(argv, argv[i], argc, s_list);
		i++;
		j++;
	}
	s_list->pa[argc - 1] = ft_real_value2(argv, argv[argc - 1], argc, s_list);
	s_list->a = &s_list->pa[0];
	s_list->b = &s_list->pb[0];
}
