#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	r;
	unsigned int	dstleng;
	unsigned int	srcleng;

	i = 0;
	r = 0;
	while (dest[r] != '\0')
	{
		r++;
	}
	dstleng = r;
	srcleng = ft_strlen(src);
	if (size == 0 || size <= dstleng)
		return (srcleng + size);
	while (src [i] != '\0' && i < size - dstleng - 1)
	{
		dest[r] = src[i];
		i++;
		r++;
	}
	dest[r] = '\0';
	return (dstleng + srcleng);
}

int main (void)
{
	char src[] = " to Another One";
    	char dest [] = "Lets go";
    printf("%i \n", ft_strlcat(dest, src, 23));
    printf("%s \n", dest);
}	