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

void	ft_four(struct s_list *s_list)
{
	while (s_list->lena != 3)
	{
		if (s_list->pa[0] != 1)
			ft_rotatea(s_list);
		else
			ft_pushb(s_list);
	}
	ft_tre_sorterf2(s_list);
}

void	ft_five(struct s_list *s_list)
{
	while (s_list->lena != 3)
	{
		if (s_list->pa[0] >= 3)
			ft_rotatea(s_list);
		else
			ft_pushb(s_list);
	}
	ft_tre_sorterf(s_list);
}

void	ft_five_sorter(struct s_list *s_list)
{
	if (s_list->lena == 4)
		ft_four(s_list);
	else
		ft_five(s_list);
	if (s_list->pb[0] == 1)
		ft_swapb(s_list);
	while (s_list->lenb != 0)
		ft_pusha(s_list);
}
