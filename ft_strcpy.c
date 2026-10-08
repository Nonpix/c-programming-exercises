// Copies a string from src to dest and returns dest.
#include <unistd.h>
#include <stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main (void)
{
    char src[] = "Hallo";
    printf("%s", ft_strcpy);

    return (0);
}
