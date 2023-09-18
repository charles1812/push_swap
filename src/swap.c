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

void    ft_swapA(struct list *list)
{
        int     tmp;

	if (list->lenA == 1 || list->iA == 0)
		return ;
        tmp = list->pA[0];
        list->pA[0] = list->pA[1];
        list->pA[1] = tmp;
        ft_putstr_fd("sa");
        list->movement += 1;
}

void    ft_swapB(struct list *list)
{
        int     tmp;

	if (list->lenB == 1 || list->iB == 0)
                return ;
        tmp = list->pB[0];
        list->pB[0] = list->pB[1];
        list->pB[1] = tmp;
        ft_putstr_fd("sb");
        list->movement += 1;
}

void    ft_ss(struct list *list)
{
        ft_swapA(list);
        ft_swapB(list);
}

