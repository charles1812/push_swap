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

void	ft_tre_sorter(struct s_list *s_list)
{
	if (s_list->lena == 2)
	{
		if (s_list->pa[0] < s_list->pa[1])
			return ;
		else
			ft_swapa(s_list);
	}
	else
		ft_tre_sorter_piece(s_list);
}

void	ft_tre_sorter_piece(struct s_list *s_list)
{
	if (s_list->pa[0] == 1)
	{
		if (s_list->pa[1] == 3)
		{
			ft_swapa(s_list);
			ft_rotatea(s_list);
		}
	}
	else if (s_list->pa[0] == 2)
	{
		if (s_list->pa[1] == 1)
			ft_swapa(s_list);
		if (s_list->pa[1] == 3)
			ft_rev_rotatea(s_list);
	}
	else if (s_list->pa[0] == 3)
	{
		if (s_list->pa[1] == 1)
			ft_rotatea(s_list);
		else
		{
			ft_rotatea(s_list);
			ft_swapa(s_list);
		}
	}
}

void	ft_tre_sorterf(struct s_list *s_list)
{
	if (s_list->pa[0] == 3)
	{
		if (s_list->pa[1] == 5)
		{
			ft_swapa(s_list);
			ft_rotatea(s_list);
		}
	}
	else if (s_list->pa[0] == 4)
	{
		if (s_list->pa[1] == 3)
			ft_swapa(s_list);
		else if (s_list->pa[1] == 5)
			ft_rev_rotatea(s_list);
	}
	else if (s_list->pa[0] == 5)
	{
		if (s_list->pa[1] == 3)
			ft_rotatea(s_list);
		else
		{
			ft_rotatea(s_list);
			ft_swapa(s_list);
		}
	}
}

void	ft_tre_sorterf2(struct s_list *s_list)
{
	if (s_list->pa[0] == 2)
	{
		if (s_list->pa[1] == 4)
		{
			ft_swapa(s_list);
			ft_rotatea(s_list);
		}
	}
	else if (s_list->pa[0] == 3)
	{
		if (s_list->pa[1] == 2)
			ft_swapa(s_list);
		else if (s_list->pa[1] == 4)
			ft_rev_rotatea(s_list);
	}
	else if (s_list->pa[0] == 4)
	{
		if (s_list->pa[1] == 2)
			ft_rotatea(s_list);
		else
		{
			ft_rotatea(s_list);
			ft_swapa(s_list);
		}
	}
}
