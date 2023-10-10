/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cspreafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:30:40 by cspreafi          #+#    #+#             */
/*   Updated: 2023/09/18 14:30:42 by cspreafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swapa(struct list *list)
{
	int	tmp;

	if (list->lena == 1 || list->ia == 0)
		return ;
	tmp = list->pa[0];
	list->pa[0] = list->pa[1];
	list->pa[1] = tmp;
	ft_putstr_fd("sa");
	list->movement += 1;
}

void	ft_swapb(struct list *list)
{
	int	tmp;

	if (list->lenb == 1 || list->ib == 0)
		return ;
	tmp = list->pb[0];
	list->pb[0] = list->pb[1];
	list->pb[1] = tmp;
	ft_putstr_fd("sb");
	list->movement += 1;
}

void	ft_ss(struct list *list)
{
	ft_swapa(list);
	ft_swapb(list);
}
