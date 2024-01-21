#include <stdio.h>

char	*ft_strcapitalize(char *str);
char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	check_initial;

	i = 0;
	check_initial = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 48 && str[i] <= 57))
		{
			if (str[i] >= 97 && str[i] <= 122 && !check_initial)
			{
				str[i] -= 32;
				check_initial = 1;
			}
			else
				check_initial = 1;
		}
		else
			check_initial = 0;
		i++;
	}
	return (str);
}

int	main()
{
	char str[] = "COmo e que vai meus putos";
	char str1[] = "safa42 24dwqa -ads";
	printf("%s", ft_strcapitalize(str));
	printf("\n%s", ft_strcapitalize(str1));
}