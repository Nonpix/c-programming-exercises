// Returns 1 if the string contains only uppercase letters (A-Z).
// Returns 0 otherwise.
#include <unistd.h>
#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i;

    i = 0;

    while (str[i] != '\0')
    {
        if (!(str[i] >= 32 && str[i] <= 126))
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
    printf("%d\n", ft_str_is_printable("Hallo Welt!"));
    printf("%d\n", ft_str_is_printable("123 ABC"));
    printf("%d\n", ft_str_is_printable("Hallo\nWelt"));
    printf("%d\n", ft_str_is_printable(""));

    return (0);
}
*/
