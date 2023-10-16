/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doublecheckers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cspreafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:28:59 by cspreafi          #+#    #+#             */
/*   Updated: 2023/09/18 14:29:03 by cspreafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_double_checks(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i <= argc)
	{
		j = i + 1;
		while (j < argc)
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

	i = 0;
	j = 0;
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
