#include <unistd.h>
#include <stdio.h>

void    ft_print_comb2(void)
{
    int a;
    int b;

    a = 0;

    while (a <= 98)
    {
        b = a + 1;
        while (b <= 99)
        {
            printf ("%02d %02d", a, b);
            if (!(a == 98 && b == 99))
            {
                printf(", ");
            }
            b++;

        }
        a++;
    }
}

int main (void)
{
    ft_print_comb2();
    return (0);
}