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

void	ft_rev_rotatea(struct s_list *s_list)
{
	int		i;
	int		tmp;

	i = s_list->ia;
	tmp = s_list->pa[s_list->ia];
	while (i != 0)
	{
		s_list->pa[i] = s_list->pa[i - 1];
		i--;
	}
	s_list->pa[0] = tmp;
	ft_putstr_fd("rra");
	s_list->movement += 1;
}

void	ft_rev_rotateb(struct s_list *s_list)
{
	int		i;
	int		tmp;

	i = s_list->ib;
	tmp = s_list->pb[s_list->ib];
	while (i != 0)
	{
		s_list->pb[i] = s_list->pb[i - 1];
		i--;
	}
	s_list->pb[0] = tmp;
	ft_putstr_fd("rrb");
	s_list->movement += 1;
}

void	ft_rrr(struct s_list *s_list)
{
	ft_rev_rotatea(s_list);
	ft_rev_rotateb(s_list);
}
