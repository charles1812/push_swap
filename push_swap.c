#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>

void    ft_impile(int argc, char **argv, struct list *list)
{
        int     i;

        i = 1;
        list->len = argc - 1;
        list->lenA = list->len;
        list->lenB = 0;
	list->iA = list->len - 1;
	list->iB = -1;
        list->pA = malloc(sizeof(int) * list->len);
        list->pB = malloc(sizeof(int) * list->len);
        while(i < argc)
        {
                list->pA[i - 1] = ft_atoi(argv[i]);
                i++;
        }
        list->A = &list->pA[0];
        list->B = &list->pB[0];
}

int	main(int argc,char **argv)
{
	int		i;
	//const int	success;
	//const int	error;
	struct	list *list = malloc(sizeof(struct list));

	i = 0;
	if (list == NULL)
		return (0);
	//success = 0;
	//error = 84;
	//list = malloc;
	//if (argc == 2)
	//	return (succes);
	if (argc > 2)
	{
		ft_impile(argc, argv, list);
	/*	while (i < list->len)
                {
                        printf("%d\n", list->pA[i]);
                        i++;
                }
		i = 0;
		write (1, "\n", 1);
		ft_swapA(list);
		while (i < list->len)
                {
                        printf("%d\n", list->pA[i]);
                        i++;
                }
		i = 0;
		write (1, "\n", 1);
		ft_pushB(list);
		while (i < list->len)
                {
                        printf("\n%d\n", list->pB[i]);
                        i++;
                }
		write (1, "\n", 1);
		i = 0;
		  while (i < list->len)
                {
                        printf("%d\n", list->pA[i]);
                        i++;
                }
		i = 0;
		write (1, "\n", 1);
		ft_swapA(list);
		while (i < list->len)
                {
                        printf("%d\n", list->pA[i]);
                        i++;
                }
		i = 0;
		write (1, "\n", 1);
		 while (i < list->len)
                {
                        printf("%d\n", list->pB[i]);
                        i++;
                }
                write (1, "\n", 1);
                i = 0;
		ft_pushB(list);
		while (i < list->len)
                {
                        printf("%d\n", list->pA[i]);
                        i++;
                }
		i = 0;
		write (1, "\n", 1);
		 while (i < list->len)
                {
                        printf("%d\n", list->pB[i]);
                        i++;
                }
                write (1, "\n", 1);
                i = 0;
		printf("\n\n%d\n", list->lenB);
                //printf("%d\n", list->iB);
		ft_pushA(list);
		while (i < list->len)
		{
			printf("%d\n", list->pA[i]);
			i++;
		}
		write (1, "\n", 1);*/

		ft_rotateA(list);
		ft_rotateA(list);
		while (i < list->len)
                {
                        printf("%d\n", list->pA[i]);
                        i++;
                }
		printf("\n\n%d\n", list->lenB);
		printf("%d", list->iB);
		 printf("\n\n%d\n", list->lenB);
                printf("%d", list->iB);
	}
	return (1);
}
