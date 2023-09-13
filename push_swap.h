#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>

struct list
{	
	int	*pA;
	int	*pB;
	int	*A;
	int	*B;
	int	lenA;
	int	lenB;
	int	iA;
	int	iB;
	int	len;
	int	stack;
	int	scale;
	int	movement;
	int test;
};

void    ft_impile(int argc, char **argv, struct list *list);
void    ft_pushA(struct list *list);
void    ft_pushB(struct list *list);
void    ft_add_A(struct list *list);
void    ft_add_B(struct list *list);
void    ft_swapA(struct list *list);
void    ft_swapB(struct list *list);
void    ft_ss(struct list *list);
void    ft_rotateA(struct list *list);
void    ft_rotateB(struct list *list);
void    ft_rr(struct list *list);
void    ft_rev_rotateA(struct list *list);
void    ft_rev_rotateB(struct list *list);

void	ft_sort(struct list *list);

void	ft_tre_sorter(struct list *list);
void	ft_tre_sorter_piece(struct list *list);
void	ft_tre_sorterF(struct list *list);

void	ft_five_sorter(struct list *list);

int		ft_stack_decrement(int n, int stack);
void	ft_all_in_A(struct list *list);
void	ft_put_close(struct list *list, int i, int j);
void	ft_find_close(struct list *list, int stack);
void	ft_hundred_sorter(struct list *list);

void	ft_fivehundred_sorter(struct list *list);
int     ft_find_stack(struct list *list);
void    ft_put_closeF(struct list *list, int j, int i);
void    ft_find_closeF(struct list *list);
void    ft_all_in_AF(struct list *list);
void    ft_fivehundred_soretr(struct list *list);


int		ft_atoi(const char *str);
void    ft_putstr_fd(char *str);

#endif
