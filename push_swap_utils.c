#include "push_swap.h"

int    ft_atoi(const char *str)
{
        int     i;
        int     j;
        int     result;

        i = 0;
        j = 1;
        result = 0;
        while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
                || str[i] == '\f' || str[i] == '\r')
                i++;
        if (str[i] == '+' || str[i] == '-')
        {
                if (str[i] == '-')
                {
                        j = j * -1;
                }
                i++;
        }
        while (str[i] >= 48 && str[i] <= 57)
        {
                result = result * 10 + (str[i] - 48);
                i++;
        }
        return (result * j);
}

