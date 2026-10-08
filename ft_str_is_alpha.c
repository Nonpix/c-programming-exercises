// Returns 1 if the string contains only letters (A-Z, a-z).
// Returns 0 if another character is found.
#include <unistd.h>
#include <stdio.h>

int    ft_str_is_alpha(char *str)
{
    int i;

    i = 0;

    while (str[i] != '\0')
    {
        if (!(str[i] >= 'a' && str[i] <= 'z') 
        && (!(str[i] >= 'A' && str[i] <= 'Z')))
        {
            return(0);
        }
        i++;
    }
    return(1);
}

/*
int main (void)
{
    char str[] = "Hallo!";
    printf("%d", ft_str_is_alpha(str));

    return (0);
}
*/
