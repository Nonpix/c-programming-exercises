// Prints all digits from '0' to '9'.
#include <unistd.h>

void    ft_print_numbers(void)
{
    char c; 
    c = '0';

    while ( c <= '9')
    {
        write (1, &c, 1);
        c++;
    }
}
/*
int main (void)
{
    ft_print_numbers();
    return (0);
}
*/
