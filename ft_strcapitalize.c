// Capitalizes the first letter of each word.
// Converts other letters to lowercase.
#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i;
    i = 1;

    if (str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] = str[0] - 32;
    }

    while (str[i] != '\0')
    {
        if (!(str[i-1] >= 97 && str[i-1] <= 122) // lowercase
            && !(str[i-1] >= 65 && str[i-1] <= 90) // uppercase
                && !(str[i-1] >= 48 && str[i-1] <= 57) // numbers
                    && ((str[i] >= 'a' && str[i] <= 'z')
                        || (str[i] >= 'A' && str[i] <= 'Z')))
                    {
                        if (str[i] >= 'a' && str[i] <= 'z')
                        {
                            str[i] = str[i] - 32; // make uppercase
                        }
                    }
            else
            {
                if (str[i] >= 65 && str[i] <= 90) // uppercase
                {
                    str[i] = str[i] + 32; // make lowercase
                }
            }

        i++;
    }
    return (str);
}
/*
int main(void)
{
    char str1[] = "hELLo wOrlD!";
    char str2[] = "hello-world";
    char str3[] = "42HELLO WORLD";
    char str4[] = "HELLO,HOW ARE YOU?";
    
    printf("%s\n", ft_strcapitalize(str1));
    printf("%s\n", ft_strcapitalize(str2));
    printf("%s\n", ft_strcapitalize(str3));
    printf("%s\n", ft_strcapitalize(str4));

    return (0);
}
*/
