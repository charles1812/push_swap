/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cspreafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:30:27 by cspreafi          #+#    #+#             */
/*   Updated: 2023/09/18 14:30:29 by cspreafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotatea(struct list *list)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = list->pa[0];
	while (i != list->ia)
	{
		list->pa[i] = list->pa[i + 1];
		i++;
	}
	list->pa[list->ia] = tmp;
	ft_putstr_fd("ra");
	list->movement += 1;
}

void	ft_rotateb(struct list *list)
{
	int		i;
	int		tmp;

	i = 0;
	tmp = list->pb[0];
	while (i != list->ib)
	{
		list->pb[i] = list->pb[i + 1];
		i++;
	}
	list->pb[list->ib] = tmp;
	ft_putstr_fd("rb");
	list->movement += 1;
}

void	ft_rr(struct list *list)
{
	ft_rotatea(list);
	ft_rotateb(list);
}
