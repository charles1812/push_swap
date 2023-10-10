/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cspreafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:29:31 by cspreafi          #+#    #+#             */
/*   Updated: 2023/09/18 14:29:34 by cspreafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>

struct list
{	
	int	*pa;
	int	*pb;
	int	*a;
	int	*b;
	int	lena;
	int	lenb;
	int	ia;
	int	ib;
	int	len;
	int	stack;
	int	scale;
	int	movement;
	int	test;
};

int		ft_is_digit(int c);
int		ft_alpha_check(int argc, char **argv);
int		ft_double_checks(int argc, char **argv);
int		ft_real_value(char **argv, char *argvi, int argc, struct list *list);
void	ft_sort(struct list *list);
void    ft_impile(int argc, char **argv, struct list *list);
void    ft_pusha(struct list *list);
void    ft_pushb(struct list *list);
void    ft_add_a(struct list *list);
void    ft_add_b(struct list *list);
void    ft_swapa(struct list *list);
void    ft_swapb(struct list *list);
void    ft_ss(struct list *list);
void    ft_rotatea(struct list *list);
void    ft_rotateb(struct list *list);
void    ft_rr(struct list *list);
void    ft_rev_rotatea(struct list *list);
void    ft_rev_rotateb(struct list *list);

void	ft_sort(struct list *list);

void	ft_tre_sorter(struct list *list);
void	ft_tre_sorter_piece(struct list *list);
void	ft_tre_sorterf(struct list *list);

void	ft_five_sorter(struct list *list);

int		ft_stack_decrement(int n, int stack);
void	ft_all_in_a(struct list *list);
void	ft_put_close(struct list *list, int i, int j);
void	ft_find_close(struct list *list, int stack);
void	ft_find_scaleh(struct list *list);
void	ft_hundred_sorter(struct list *list);

void	ft_fivehundred_sorter(struct list *list);
void    ft_find_scale(struct list *list);
void    ft_put_closef(struct list *list, int j, int i);
void    ft_find_closef(struct list *list);
void    ft_all_b(struct list *list);
void	ft_put_closeaf(struct list *list, int i, int j);
void	ft_near_friends(struct list *list, int k);
void	ft_find_closeaf(struct list *list);
void    ft_fivehundred_sorter(struct list *list);


int		ft_atoi(const char *str);
void    ft_putstr_fd(char *str);

#endif
