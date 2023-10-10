/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tre_sorter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cspreafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:30:49 by cspreafi          #+#    #+#             */
/*   Updated: 2023/09/18 14:30:52 by cspreafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_tre_sorter(struct list *list)
{
	if (list->lena == 2)
	{
		if (list->pa[0] < list->pa[1])
			return ;
		else
			ft_swapa(list);
	}
	else
		ft_tre_sorter_piece(list);
}

void	ft_tre_sorter_piece(struct list *list)
{
	if (list->pa[0] == 1)
	{
		if (list->pa[1] == 3)
		{
			ft_swapa(list);
			ft_rotatea(list);
		}
	}
	else if (list->pa[0] == 2)
	{
		if (list->pa[1] == 1)
			ft_swapa(list);
		if (list->pa[1] == 3)
			ft_rev_rotatea(list);
	}
	else if (list->pa[0] == 3)
	{
		if (list->pa[1] == 1)
			ft_rotatea(list);
		else
		{
			ft_rotatea(list);
			ft_swapa(list);
		}
	}
}

void	ft_tre_sorterf(struct list *list)
{
	if (list->pa[0] == 3)
	{
		if (list->pa[1] == 5)
		{
			ft_swapa(list);
			ft_rotatea(list);
		}
	}
	else if (list->pa[0] == 4)
	{
		if (list->pa[1] == 3)
			ft_swapa(list);
		if (list->pa[1] == 5)
			ft_rev_rotatea(list);
	}
	else if (list->pa[0] == 5)
	{
		if (list->pa[1] == 3)
			ft_rotatea(list);
		else
		{
			ft_rotatea(list);
			ft_swapa(list);
		}
	}
}
