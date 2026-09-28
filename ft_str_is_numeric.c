#include <unistd.h>
#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int i;
    i = 0;

    while (str[i] != '\0')
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
        {
            return (0);
        }
        i++;
    }
    return (1);
}
/*
int main(void)
{
    printf("%d\n", ft_str_is_numeric("12345"));
    printf("%d\n", ft_str_is_numeric("007"));
    printf("%d\n", ft_str_is_numeric("123abc"));
    printf("%d\n", ft_str_is_numeric("Hallo"));
    printf("%d\n", ft_str_is_numeric("/!934"));
    return (0);
}
*/
