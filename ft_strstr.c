#include <stdio.h>

char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    if (to_find[j] == '\0')
            return(str);
    while (str[i] != '\0')
    {
        while (str[i + j] == to_find[j] && str[i + j] != '\0')
            j++;
        if (to_find[j] == '\0')
            return(str + i);
            i++;
            j = 0;     
    }
    return (0);
}

int main()
{
    char str[] = "This Exercise is from the piscine in 2024";
    char find[] = "Exercise";
    printf("%s", ft_strstr(str, find));
}
