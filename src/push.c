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

void	ft_pusha(struct list *list)
{
	ft_add_a(list);
	list->lenb -= 1;
	list->ib -= 1;
	ft_putstr_fd("pa");
	list->movement += 1;
}

void	ft_pushb(struct list *list)
{
	ft_add_b(list);
	list->lena -= 1;
	list->ia -= 1;
	ft_putstr_fd("pb");
	list->movement += 1;
}

void	ft_add_a(struct list *list)
{
	int	i;
	int	tmp;

	i = list->ia + 1;
	tmp = list->pb[0];
	while (i != 0)
	{
		list->pa[i] = list->pa[i - 1];
		i--;
	}
	list->pa[0] = tmp;
	list->lena += 1;
	list->ia += 1;
	i = 0;
	while (i < list->ib)
	{
		list->pb[i] = list->pb[i + 1];
		i++;
	}
}

void	ft_add_b(struct list *list)
{
	int	i;
	int	tmp;

	i = list->ib + 1;
	tmp = list->pa[0];
	while (i != 0)
	{
		list->pb[i] = list->pb[i - 1];
		i--;
	}
	list->pb[0] = tmp;
	list->lenb += 1;
	list->ib += 1;
	i = 0;
	while (i < list->ia)
	{
		list->pa[i] = list->pa[i + 1];
		i++;
	}
}
