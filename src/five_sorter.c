/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_sorter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cspreafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:29:46 by cspreafi          #+#    #+#             */
/*   Updated: 2023/09/18 14:29:48 by cspreafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	ft_five_sorter(struct list *list)
{
	while (list->lena != 3)
	{
		if (list->pa[0] >= 3)
			ft_rotatea(list);
		else
			ft_pushb(list);
	}
	ft_tre_sorterf(list);
	if (list->pb[0] < list->pb[1])
		ft_swapb(list);
	while (list->lenb != 0)
		ft_pusha(list);
}
