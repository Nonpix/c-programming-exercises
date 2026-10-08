// Prints 'N' if the number is negative, otherwise prints 'P'.
#include <unistd.h>

void    ft_is_negative(int i)
{
    if (i < 0)
    {
        write (1, "N", 1);
    }
    else 
    {
        write (1, "P", 1);
    }
}
/*
int main (void)
{
    ft_is_negative(20);
    ft_is_negative(-5);
    ft_is_negative(41);

    return (0); 
}
*/
