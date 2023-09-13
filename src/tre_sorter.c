#include "../push_swap.h"

void    ft_tre_sorter(struct list *list)
{
    if(list->lenA == 2)
    {
        if(list->pA[0] < list->pA[1])
            return;
        else
            ft_swapA(list);
    }
    else
        ft_tre_sorter_piece(list);
}

void    ft_tre_sorter_piece(struct list *list)
{
        if(list->pA[0] == 1)
        {
            if (list->pA[1] == 3)
            {
                ft_swapA(list);
                ft_rotateA(list);
            }
        }
        else if(list->pA[0] == 2)
        {
            if(list->pA[1] == 1)
                ft_swapA(list);
            if(list->pA[1] == 3)
                ft_rev_rotateA(list);
        }
        else if(list->pA[0] == 3)
        {
            if(list->pA[1] == 1)
                ft_rotateA(list);
            else
            {
                ft_rotateA(list);
                ft_swapA(list);
            }
        }
}

/*void    ft_tre_sorterF(struct list *list)
{
    if(list->lenA == 2)
    {
        if(list->pA[0] < list->pA[1])
            return;
        else
            ft_swapA(list);
    }
    else
        ft_tre_sorter_pieceF(list);
}*/

void    ft_tre_sorterF(struct list *list)
{
        if(list->pA[0] == 3)
        {
            if (list->pA[1] == 5)
            {
                ft_swapA(list);
                ft_rotateA(list);
            }
        }
        else if(list->pA[0] == 4)
        {
            if(list->pA[1] == 3)
                ft_swapA(list);
            if(list->pA[1] == 5)
                ft_rev_rotateA(list);
        }
        else if(list->pA[0] == 5)
        {
            if(list->pA[1] == 3)
                ft_rotateA(list);
            else
            {
                ft_rotateA(list);
                ft_swapA(list);
            }
        }
}

/*void    ft_tre_sorterB(struct list *list)
{
    if(list->lenB == 2)
    {
        if(list->pB[0] < list->pB[1])
            return;
        else
            ft_swapB(list);
    }
    else
        ft_tre_sorter_pieceB(list);
}

void    ft_tre_sorter_pieceB(struct list *list)
{
        if(list->pB[2] == 1)
        {
            ft_rotateB(list);
            if (list->pA[2] != 3)
                ft_swapB(list);
        }
        else if(list->pB[2] == 2)
        {
            if(list->pB[1] == 3)
                ft_swapB(list);
            if(list->pB[1] == 1)
                ft_rev_rotateB(list);
        }
        else if(list->pB[2] == 3 && list->pB[1] != 2)
        {
            ft_rev_rotateB(list);
            ft_swapB(list);
        }
}*/
