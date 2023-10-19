/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cspreafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:30:07 by cspreafi          #+#    #+#             */
/*   Updated: 2023/09/18 14:30:10 by cspreafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_putstr_fd(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(STDOUT_FILENO, &str[i], 1);
		i++;
	}
	write(STDOUT_FILENO, "\n", 1);
}

void	ft_find_scale(struct s_list *s_list)
{
	int	i;
	int	j;

	i = 8;
	j = 0;
	while (i <= 12 && i < (s_list->len / 4))
	{
		if (s_list->len % i == 0)
			j = i;
		i++;
	}
	if (j == 0)
		j = 12;
	s_list->scale = s_list->len / j;
	s_list->stack = s_list->scale;
}

int	ft_is_digit(int c, int c2)
{
	if ((c >= '0' && c <= '9') || (c == '-' && c2 >= '0' && c2 <= '9'))
		return (1);
	return (0);
}

int	ft_alpha_check(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (ft_is_digit(argv[i][j], argv[i][j + 1]) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_alpha_check2(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (ft_is_digit(argv[i][j], argv[i][j + 1]) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
