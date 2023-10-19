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

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

struct		s_list
{
	int		*pa;
	int		*pb;
	int		*a;
	int		*b;
	int		lena;
	int		lenb;
	int		ia;
	int		ib;
	int		len;
	int		stack;
	int		scale;
	int		movement;
	int		test;
	char	**fkargv;
};

char		**ft_split(const char *str, char c);

int			ft_is_digit(int c, int c2);
int			ft_alpha_check(int argc, char **argv);
int			ft_alpha_check2(int argc, char **argv);
int			ft_double_checks(int argc, char **argv);
void		ft_sort(struct s_list *list);
int			ft_real_value(char **argv, char *argvi, int argc,
				struct s_list *list);
void		ft_impile(int argc, char **argv, struct s_list *list);
int			ft_real_value2(char **argv, char *argvi, int argc,
				struct s_list *list);
void		ft_impile2(int argc, char **argv, struct s_list *list);
void		ft_pusha(struct s_list *list);
void		ft_pushb(struct s_list *list);
void		ft_add_a(struct s_list *list);
void		ft_add_b(struct s_list *list);
void		ft_swapa(struct s_list *list);
void		ft_swapb(struct s_list *list);
void		ft_ss(struct s_list *list);
void		ft_rotatea(struct s_list *list);
void		ft_rotateb(struct s_list *list);
void		ft_rr(struct s_list *list);
void		ft_rev_rotatea(struct s_list *list);
void		ft_rev_rotateb(struct s_list *list);
int			ft_double_checks(int argc, char **argv);
int			ft_double_checks2(int argc, char **argv);

void		ft_sort(struct s_list *list);

void		ft_tre_sorter(struct s_list *list);
void		ft_tre_sorter_piece(struct s_list *list);
void		ft_tre_sorterf(struct s_list *list);
void		ft_tre_sorterf2(struct s_list *list);

void		ft_five_sorter(struct s_list *list);

int			ft_stack_decrement(int n, int stack);
void		ft_all_in_a(struct s_list *list);
void		ft_put_close(struct s_list *list, int i, int j);
void		ft_find_close(struct s_list *list, int stack);
void		ft_find_scaleh(struct s_list *list);
void		ft_hundred_sorter(struct s_list *list);

void		ft_fivehundred_sorter(struct s_list *list);
void		ft_find_scale(struct s_list *list);
void		ft_put_closef(struct s_list *list, int j, int i);
void		ft_find_closef(struct s_list *list);
void		ft_all_b(struct s_list *list);
void		ft_put_closeaf(struct s_list *list, int i, int j);
void		ft_near_friends(struct s_list *list, int k);
void		ft_find_closeaf(struct s_list *list);
void		ft_fivehundred_sorter(struct s_list *list);

int			ft_atoi(const char *str);
void		ft_putstr_fd(char *str);

#endif
