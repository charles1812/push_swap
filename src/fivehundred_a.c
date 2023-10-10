/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fivehundred_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cspreafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:29:31 by cspreafi          #+#    #+#             */
/*   Updated: 2023/09/18 14:29:34 by cspreafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_put_closeaf(struct list *list, int i, int j)
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
			if (list->pb[0] > list->lenb - 4)
			{
				ft_pusha(list);
				ft_rotatea(list);
				list->test += 1;
			}
			else
				ft_rotateb(list);
			i--;
		}
	}
	ft_pusha(list);
}

void	ft_near_friends(struct list *list, int k)
{
	int	k2;

	k = list->ia - k;
	k2 = k + 1;
	while (k2 > 0)
	{
		ft_rev_rotatea(list);
		k2--;
	}
	ft_pushb(list);
	while (k2 < k)
	{
		ft_rotatea(list);
		k2++;
	}
	ft_pusha(list);
	list->test -= 1;
}

void	ft_find_closeaf(struct list *list)
{
	int	i;
	int	j;
	int	k;
	int	tst;
	int	tstv;

	j = list->ib;
	i = 0;
	k = list->ia;
	tst = list->test;
	tstv = (list->lena - list->test);
	while (list->pb[i] != list->lenb + tst && i < list->ib)
		i++;
	while (list->pb[j] != list->lenb + tst && j > 0)
		j--;
	while (list->pa[k] != list->lenb + tst && k >= tstv && tstv > 0)
		k--;
	if (k >= tstv && list->test != 0)
		ft_near_friends(list, k);
	else
		ft_put_closeaf(list, i, j);
}
