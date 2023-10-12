/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fivehundred_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cspreafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:29:31 by cspreafi          #+#    #+#             */
/*   Updated: 2023/09/18 14:29:34 by cspreafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_put_closef(struct s_list *s_list, int j, int i)
{
	j = s_list->lena - j;
	if (i + 1 > j)
	{
		while (j > 0)
		{
			ft_rev_rotatea(s_list);
			j--;
		}
	}
	else
	{
		while (i != 0)
		{
			if (i > 1)
				ft_rotatea(s_list);
			else
				ft_swapa(s_list);
			i--;
		}
	}
	ft_pushb(s_list);
}

void	ft_find_closef(struct s_list *s_list)
{
	int	i;
	int	j;

	j = s_list->ia;
	i = 0;
	while (s_list->pa[j] > s_list->stack)
		j--;
	while (s_list->pa[i] > s_list->stack)
		i++;
	ft_put_closef(s_list, j, i);
}

void	ft_all_b(struct s_list *s_list)
{
	int	sorted;
	int	secur;

	secur = 0;
	sorted = 0;
	ft_find_scale(s_list);
	while (secur != 2)
	{
		while (sorted + 1 <= s_list->stack)
		{
			ft_find_closef(s_list);
			sorted++;
		}
		s_list->stack += s_list->scale;
		if (s_list->stack >= s_list->len)
		{
			s_list->stack = s_list->len;
			secur++;
		}
	}
}
