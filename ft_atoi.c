#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
    int i;
    int j;
    int result;
    int sign;

    i = 0;
    result = 0;
    sign = 1;

    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }

    else if (str[i] == '+')
    {
        i++;
    }
    
    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
           j = str[i] - '0';
           result = result * 10 + j;
        }
         
        else 
        {
            break;
        }
        i++;
    }
    return (result * sign);
}
/*
int main (void)
{
    printf("%d\n", ft_atoi("1234"));
    printf("%d\n", ft_atoi("+342Hallo"));
    printf("%d\n", ft_atoi("-685Dog"));
    printf("%d\n", ft_atoi("+Not1"));
    return (0);
}
*/