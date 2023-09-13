#include "../push_swap.h"

void    ft_five_sorter(struct list *list)
{
    while(list->lenA != 3)
    {
        if(list->pA[0] >= 3)
            ft_rotateA(list);
        else
            ft_pushB(list);
    }
    ft_tre_sorterF(list);
    if(list->pB[0] < list->pB[1])
        ft_swapB(list);
    while(list->lenB != 0)
        ft_pushA(list);
}