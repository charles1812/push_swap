/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cspreafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:30:18 by cspreafi          #+#    #+#             */
/*   Updated: 2023/09/18 14:30:20 by cspreafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rev_rotatea(struct list *list)
{
	int		i;
	int		tmp;

	i = list->ia;
	tmp = list->pa[list->ia];
	while (i != 0)
	{
		list->pa[i] = list->pa[i - 1];
		i--;
	}
	list->pa[0] = tmp;
	ft_putstr_fd("rra");
	list->movement += 1;
}

void	ft_rev_rotateb(struct list *list)
{
	int		i;
	int		tmp;

	i = list->ib;
	tmp = list->pb[list->ib];
	while (i != 0)
	{
		list->pb[i] = list->pb[i - 1];
		i--;
	}
	list->pb[0] = tmp;
	ft_putstr_fd("rrb");
	list->movement += 1;
}

void	ft_rrr(struct list *list)
{
	ft_rev_rotatea(list);
	ft_rev_rotateb(list);
}
