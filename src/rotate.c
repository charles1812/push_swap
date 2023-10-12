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

void	ft_rotatea(struct s_list *s_list)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = s_list->pa[0];
	while (i != s_list->ia)
	{
		s_list->pa[i] = s_list->pa[i + 1];
		i++;
	}
	s_list->pa[s_list->ia] = tmp;
	ft_putstr_fd("ra");
	s_list->movement += 1;
}

void	ft_rotateb(struct s_list *s_list)
{
	int		i;
	int		tmp;

	i = 0;
	tmp = s_list->pb[0];
	while (i != s_list->ib)
	{
		s_list->pb[i] = s_list->pb[i + 1];
		i++;
	}
	s_list->pb[s_list->ib] = tmp;
	ft_putstr_fd("rb");
	s_list->movement += 1;
}

void	ft_rr(struct s_list *s_list)
{
	ft_rotatea(s_list);
	ft_rotateb(s_list);
}
