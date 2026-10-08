// Prints an integer using recursion.
// Handles positive and negative numbers.
#include <unistd.h>

void    ft_putnbr(int nb)
{
    char c;

    if (nb < 0)
        {
            nb = -nb; // nb positive
            write (1, "-", 1);
        }
    
        if (nb >= 10)
           {
                ft_putnbr(nb/10);
           }
   
    c = (nb % 10) + '0';
    write (1, &c, 1);
}
/*
int main (void)
{
    ft_putnbr(32503);
    return (0);
}
*/
