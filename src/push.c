/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cspreafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:29:11 by cspreafi          #+#    #+#             */
/*   Updated: 2023/09/18 14:29:16 by cspreafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_pusha(struct s_list *s_list)
{
	ft_add_a(s_list);
	s_list->lenb -= 1;
	s_list->ib -= 1;
	ft_putstr_fd("pa");
	s_list->movement += 1;
}

void	ft_pushb(struct s_list *s_list)
{
	ft_add_b(s_list);
	s_list->lena -= 1;
	s_list->ia -= 1;
	ft_putstr_fd("pb");
	s_list->movement += 1;
}

void	ft_add_a(struct s_list *s_list)
{
	int	i;
	int	tmp;

	i = s_list->ia + 1;
	tmp = s_list->pb[0];
	while (i != 0)
	{
		s_list->pa[i] = s_list->pa[i - 1];
		i--;
	}
	s_list->pa[0] = tmp;
	s_list->lena += 1;
	s_list->ia += 1;
	i = 0;
	while (i < s_list->ib)
	{
		s_list->pb[i] = s_list->pb[i + 1];
		i++;
	}
}

void	ft_add_b(struct s_list *s_list)
{
	int	i;
	int	tmp;

	i = s_list->ib + 1;
	tmp = s_list->pa[0];
	while (i != 0)
	{
		s_list->pb[i] = s_list->pb[i - 1];
		i--;
	}
	s_list->pb[0] = tmp;
	s_list->lenb += 1;
	s_list->ib += 1;
	i = 0;
	while (i < s_list->ia)
	{
		s_list->pa[i] = s_list->pa[i + 1];
		i++;
	}
}
