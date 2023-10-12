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

void	ft_put_closeh(struct s_list *s_list, int j, int i)
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

void	ft_find_closeh(struct s_list *s_list)
{
	int	i;
	int	j;

	j = s_list->ia;
	i = 0;
	while (s_list->pa[j] > s_list->stack)
		j--;
	while (s_list->pa[i] > s_list->stack)
		i++;
	ft_put_closeh(s_list, j, i);
}

void	ft_put_closeah(struct s_list *s_list, int i, int j)
{
	j = s_list->lenb - j;
	if ((i + 1) > j)
	{
		while (j > 0)
		{
			ft_rev_rotateb(s_list);
			j--;
		}
	}
	else
	{
		while (i > 0)
		{
			if (i > 1)
				ft_rotateb(s_list);
			else
				ft_swapb(s_list);
			i--;
		}
	}
	ft_pusha(s_list);
}

void	ft_find_closeah(struct s_list *s_list)
{
	int	i;
	int	j;

	j = s_list->ib;
	i = 0;
	while (s_list->pb[i] != s_list->lenb)
		i++;
	while (s_list->pb[j] != s_list->lenb)
		j--;
	ft_put_closeah(s_list, i, j);
}

void	ft_hundred_sorter(struct s_list *s_list)
{
	int	sorted;
	int	secur;

	secur = 0;
	sorted = 0;
	ft_find_scaleh(s_list);
	while (secur != 2)
	{
		while (sorted + 1 <= s_list->stack)
		{
			ft_find_closeh(s_list);
			sorted++;
		}
		s_list->stack += s_list->scale;
		if (s_list->stack >= s_list->len)
		{
			s_list->stack = s_list->len;
			secur++;
		}
	}
	while (s_list->lenb != 0)
		ft_find_closeah(s_list);
}
