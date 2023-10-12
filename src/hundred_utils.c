/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundred_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cspreafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:29:55 by cspreafi          #+#    #+#             */
/*   Updated: 2023/09/18 14:29:57 by cspreafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_find_scaleh(struct s_list *s_list)
{
	int	i;
	int	j;

	i = 2;
	j = 0;
	while (i <= 10 && i < (s_list->len / 4))
	{
		if (s_list->len % i == 0)
			j = i;
		i++;
	}
	if (j == 0)
		j = 6;
	s_list->scale = s_list->len / j;
	s_list->stack = s_list->scale;
}
