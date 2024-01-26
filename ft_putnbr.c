#include <stdio.h>
void    ft_putchar(char n)
{
    write(1,&n,1);
}

void ft_putnbr(int nb)
{
    if (nb == -214783648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
    }
    else if (nb <0)
    {
        ft_putchar('-');
        nb = -nb;
        ft_putnbr(nb);
    }
    else if(nb > 9)
    {
        ft_putnbr(nb /10);
        ft_putnbr(nb %10);
    }
    else
        ft_putchar(nb + 48);
}
int main(void)
{
    ft_putnbr(5);
}