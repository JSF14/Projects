#include <stdio.h>

char *ft_strlowercase(char *str)
{
    int i;

    i = 0;

    while (str[i] != '\0')
    {
        if(str[i] >= 96 && str[i] <= 122)
        {
            str[i] += 32;
        }
        i++;
    }
    return (str);
}

/*int main()
{
    char str[] = "ASJFASÇLK";
    printf("%s", ft_strlowercase(str));
}*/
