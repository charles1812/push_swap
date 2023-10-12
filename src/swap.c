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

void	ft_swapa(struct s_list *s_list)
{
	int	tmp;

	if (s_list->lena == 1 || s_list->ia == 0)
		return ;
	tmp = s_list->pa[0];
	s_list->pa[0] = s_list->pa[1];
	s_list->pa[1] = tmp;
	ft_putstr_fd("sa");
	s_list->movement += 1;
}

void	ft_swapb(struct s_list *s_list)
{
	int	tmp;

	if (s_list->lenb == 1 || s_list->ib == 0)
		return ;
	tmp = s_list->pb[0];
	s_list->pb[0] = s_list->pb[1];
	s_list->pb[1] = tmp;
	ft_putstr_fd("sb");
	s_list->movement += 1;
}

void	ft_ss(struct s_list *s_list)
{
	ft_swapa(s_list);
	ft_swapb(s_list);
}
