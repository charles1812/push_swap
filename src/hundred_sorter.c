/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundred_sorter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cspreafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:29:55 by cspreafi          #+#    #+#             */
/*   Updated: 2023/09/18 14:29:57 by cspreafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_put_closeh(struct list *list, int j, int i)
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

void	ft_find_closeh(struct list *list)
{
	int	i;
	int	j;

	j = list->ia;
	i = 0;
	while (list->pa[j] > list->stack)
		j--;
	while (list->pa[i] > list->stack)
		i++;
	ft_put_closeh(list, j, i);
}

void	ft_put_closeah(struct list *list, int i, int j)
{
	j = list->lenb - j;
	if ((i + 1) > j)
	{
		while (j > 0)
		{
			ft_rev_rotateb(list);
			j--;
		}
	}
	else
	{
		while (i > 0)
		{
			if (i > 1)
				ft_rotateb(list);
			else
				ft_swapb(list);
			i--;
		}
	}
	ft_pusha(list);
}

void	ft_find_closeah(struct list *list)
{
	int	i;
	int	j;

	j = list->ib;
	i = 0;
	while (list->pb[i] != list->lenb)
		i++;
	while (list->pb[j] != list->lenb)
		j--;
	ft_put_closeah(list, i, j);
}

void	ft_hundred_sorter(struct list *list)
{
	int	sorted;
	int	secur;

	secur = 0;
	sorted = 0;
	ft_find_scaleh(list);
	while (secur != 2)
	{
		while (sorted + 1 <= list->stack)
		{
			ft_find_closeh(list);
			sorted++;
		}
		list->stack += list->scale;
		if (list->stack >= list->len)
		{
			list->stack = list->len;
			secur++;
		}
	}
	while (list->lenb != 0)
		ft_find_closeah(list);
}
