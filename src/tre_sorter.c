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
	if (list->lenA == 2)
	{
		if (list->pA[0] < list->pA[1])
			return ;
		else
			ft_swapA(list);
	}
	else
		ft_tre_sorter_piece(list);
}

void	ft_tre_sorter_piece(struct list *list)
{
	if (list->pA[0] == 1)
	{
		if (list->pA[1] == 3)
		{
			ft_swapA(list);
			ft_rotateA(list);
		}
	}
	else if (list->pA[0] == 2)
	{
		if (list->pA[1] == 1)
			ft_swapA(list);
		if (list->pA[1] == 3)
			ft_rev_rotateA(list);
	}
	else if (list->pA[0] == 3)
	{
		if (list->pA[1] == 1)
			ft_rotateA(list);
		else
		{
			ft_rotateA(list);
			ft_swapA(list);
		}
	}
}

void	ft_tre_sorterf(struct list *list)
{
	if (list->pA[0] == 3)
	{
		if (list->pA[1] == 5)
		{
			ft_swapA(list);
			ft_rotateA(list);
		}
	}
	else if (list->pA[0] == 4)
	{
		if (list->pA[1] == 3)
			ft_swapA(list);
		if (list->pA[1] == 5)
			ft_rev_rotateA(list);
	}
	else if (list->pA[0] == 5)
	{
		if (list->pA[1] == 3)
			ft_rotateA(list);
		else
		{
			ft_rotateA(list);
			ft_swapA(list);
		}
	}
}
