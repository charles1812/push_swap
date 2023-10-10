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

void	ft_fivehundred_sorter(struct list *list)
{
	ft_all_b(list);
	list->test = 0;
	list->scale = 15;
	list->stack = list->len;
	while (list->lenb + list->test > 0)
	{
		ft_find_closeaf(list);
		if (list->lenb + list->test + 1 == list->stack)
		{
			list->stack -= list->scale;
			if (list->stack <= 0)
				list->scale = 0;
		}
	}
}
