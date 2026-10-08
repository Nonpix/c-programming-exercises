// Copies up to n characters from src to dest.
// Fills remaining space with '\0' if necessary.
#include <unistd.h>
#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;

    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}
/*
int main (void)
{
    char src[] = "Hey";
    char dest[10];
    unsigned int n = 5;
    printf("%s", ft_strncpy(dest, src, n));
    return (0);
}
*/
