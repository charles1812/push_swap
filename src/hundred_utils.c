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

void	ft_find_scaleh(struct list *list)
{
	int	i;
	int	j;

	i = 2;
	j = 0;
	while (i <= 10 && i < (list->len / 4))
	{
		if (list->len % i == 0)
			j = i;
		i++;
	}
	if (j == 0)
		j = 6;
	list->scale = list->len / j;
	list->stack = list->scale;
}
