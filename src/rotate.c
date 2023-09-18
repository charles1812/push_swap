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

void	ft_rotatea(struct list *list)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = list->pA[0];
	while (i != list->iA)
	{
		list->pA[i] = list->pA[i + 1];
		i++;
	}
	list->pA[list->iA] = tmp;
	ft_putstr_fd("ra");
	list->movement += 1;
}

void	ft_rotateB(struct list *list)
{
        int     i;
        int     tmp;

        i = 0;
        tmp = list->pB[0];
        while (i != list->iB)
        {
                list->pB[i] = list->pB[i + 1];
                i++;
        }
        list->pB[list->iB] = tmp;
		ft_putstr_fd("rb");
		list->movement += 1;
}

void	ft_rr(struct list *list)
{
	ft_rotateA(list);
	ft_rotateB(list);
}


