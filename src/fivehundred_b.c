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

void	ft_put_closef(struct list *list, int j, int i)
{
	j = list->lena - j;
	if (i + 1 > j)
	{
		while (j > 0)
		{
			ft_rev_rotatea(list);
			j--;
		}
	}
	else
	{
		while (i != 0)
		{
			if (i > 1)
				ft_rotatea(list);
			else
				ft_swapa(list);
			i--;
		}
	}
	ft_pushb(list);
}

void	ft_find_closef(struct list *list)
{
	int	i;
	int	j;

	j = list->ia;
	i = 0;
	while (list->pa[j] > list->stack)
		j--;
	while (list->pa[i] > list->stack)
		i++;
	ft_put_closef(list, j, i);
}

void	ft_all_b(struct list *list)
{
	int	sorted;
	int	secur;

	secur = 0;
	sorted = 0;
	ft_find_scale(list);
	while (secur != 2)
	{
		while (sorted + 1 <= list->stack)
		{
			ft_find_closef(list);
			sorted++;
		}
		list->stack += list->scale;
		if (list->stack >= list->len)
		{
			list->stack = list->len;
			secur++;
		}
	}
}
