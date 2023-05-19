#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
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
	int	display_status;
};

void    ft_impile(int argc, char **argv, struct list *list);
void    ft_pushA(struct list *list);
void    ft_pushB(struct list *list);
void    ft_add_A(struct list *list);
void    ft_add_B(struct list *list);
void    ft_reimpileA(struct list *list);
void    ft_reimpileB(struct list *list);
void    ft_swapA(struct list *list);
void    ft_swapB(struct list *list);
void    ft_ss(struct list *list);
void    ft_rotateA(struct list *list);
void    ft_rotateB(struct list *list);
void    ft_rr(struct list *list);


int	ft_atoi(const char *str);

#endif
