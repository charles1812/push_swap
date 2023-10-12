/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fivehundred_sorter.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cspreafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:29:31 by cspreafi          #+#    #+#             */
/*   Updated: 2023/09/18 14:29:34 by cspreafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_fivehundred_sorter(struct s_list *s_list)
{
	ft_all_b(s_list);
	s_list->test = 0;
	s_list->scale = 15;
	s_list->stack = s_list->len;
	while (s_list->lenb + s_list->test > 0)
	{
		ft_find_closeaf(s_list);
		if (s_list->lenb + s_list->test + 1 == s_list->stack)
		{
			s_list->stack -= s_list->scale;
			if (s_list->stack <= 0)
				s_list->scale = 0;
		}
	}
}
