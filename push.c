#include "push_swap.h"

void    ft_pushA(struct list *list)
{
        ft_add_A(list);
	list->lenB -= 1;
	list->iB -= 1;
       // ft_reimpileB(list);
}

void    ft_pushB(struct list *list)
{
        ft_add_B(list);
	list->lenA -= 1;
        list->iA -= 1;
        //ft_reimpileA(list);
}

void    ft_add_A(struct list *list)
{
        int     tmp;
//        int     save;
//        int     i;

        //i = list->i;
        tmp = list->pB[list->iB];
        list->pA[list->iA + 1] = tmp;
        list->lenA += 1;
	list->iA += 1;
}

void    ft_add_B(struct list *list)
{
        int     tmp;
//        int     save;
//        int     i;

        //i = list->i;
        tmp = list->pA[list->iA];
        list->pB[list->iB + 1] = tmp;
        list->lenB += 1;
        list->iB += 1;
}


/*void    ft_add_B(struct list *list)
{
        int     tmp;
        int     save;
        int     i;
	int	len;

        i = 0;
        tmp = list->pA[iA];
        while (i != list->lenB + 1)
        {
                save = list->pB[i];
                list->pB[i] = tmp;
                tmp = list->pB[i + 1];
                i++;
        }
        list->lenB += 1;
	list->iB += 1;
}
*/
void    ft_reimpileA(struct list *list)
{
        int     i;

        i = 1;
        while (i != list->lenA)
        {
                list->pA[i - 1] = list->pA[i];
                i++;
        }
        list->lenA -= 1;
	list->iA -= 1;
}

void    ft_reimpileB(struct list *list)
{
        int     i;

        i = 1;
        while (i != list->lenB)
        {
                list->pB[i - 1] = list->pB[i];
                i++;
        }
        list->lenB -= 1;
	list->iB -= 1;
}


