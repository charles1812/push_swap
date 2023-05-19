
#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>

int	ft_check(struct list *list)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (i < list->len)
	{
		j = i + 1;
		while(list->pA[j] != '\0' && j <= list->len)
		{
			if (list->pA[i] == list->pA[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_real_value(struct list *list)
{
	int	i;
	int	j;
	int	tmp;
	int	res;

	i = 0;
	while(i <= list->len)
	{
		tmp = list->pA[i];
		j = 0;
		res = 0;
		//printf("%d\n", list->pA[i]);
		while(j <= list->len)
		{
			if (list->pA[i] < list->pA[j])
				res += 1;
			j++;
		}
		list->pA[i] = list->len - res;
		printf("%d\n\n", list->pA[i]);
		i++;
	}
}

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
	char		*success;
	const int	error;
	struct	list *list = malloc(sizeof(struct list));

	i = 0;
	if (list == NULL)
		return (0);
	//success = 0;
	//error = "Error";
	//list = malloc;
	//if (argc == 2)
	//	return (succes);
	if (argc > 2)
	{
		ft_impile(argc, argv, list);
		if (ft_check(list) == 0)
			return (error);
		ft_real_value(list);
		ft_rotateA(list);
		ft_rev_rotateA(list);
		//ft_rev_rotateA(list);
		while (i < list->len)
                {
                        printf("%d\n", list->pA[i]);
                        i++;
                }
		printf("\n\n%d\n", ft_check(list));
		//printf("%d", list->iB);
		// printf("\n\n%d\n", list->lenB);
              //  printf("%d", list->iB);
	}
	return (1);
}
