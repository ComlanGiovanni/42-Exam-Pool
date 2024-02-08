#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_small_putnbr(int nbr)
{
    if (nbr > 9)
    {
        ft_small_putnbr(nbr / 10);
        ft_small_putnbr(nbr % 10);
    }
    else
        ft_putchar(nbr + '0');
}

int	ft_short_atoi(char *str)
{
    int idx;
    int result;
    
    idx = 0;
    result = 0;
    while (str[idx] != '\0')
    {
        result *= 10;
        result += str[idx] - '0';
        idx++;
    }
    return (result);
}

int	ft_is_prime(int nbr)
{
    int check;

    check = 2;
    if (nbr <= 1)
        return (0);
    while (check < nbr)
    {
        if ((nbr % check) == 0)
            return (0);
        check++;
    }
    return (1);
}

int	ft_add_prime_sum(int nbr)
{
    int sum;
    int check;

    check = 2;
    sum = 0;
    if (nbr <= 0)
        return (0);
    while (check <= nbr)
    {
        if (ft_is_prime(check))
            sum += check;
        check++;
    }
    return (sum);
}

int main(int argc, char **argv)
{
    if (argc == 2)
        ft_small_putnbr(ft_add_prime_sum(ft_short_atoi(argv[1])));
    else
        ft_putchar('0');
    ft_putchar('\n');
    return (0);
}
