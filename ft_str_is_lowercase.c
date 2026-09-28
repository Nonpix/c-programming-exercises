#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i;
    i = 0;

    while (str[i] != '\0')
    {
        if (!(str[i] >= 'a' && str[i] <= 'z'))
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
    printf("%d\n", ft_str_is_lowercase("hey"));
    printf("%d\n", ft_str_is_lowercase("stoP"));
    printf("%d\n", ft_str_is_lowercase("NONE"));
    printf("%d\n", ft_str_is_lowercase("yes"));
    printf("%d\n", ft_str_is_lowercase(""));
    return (0);
}
*/