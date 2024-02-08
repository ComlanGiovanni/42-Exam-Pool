#include <stdio.h>

void	ft_pgcd(int nbr1, int nbr2)
{
    int div;
    int pgcd;

    div = 1;
    if (nbr1 <= 0 || nbr2 <= 0)
        return ;
    while ((div <= nbr1) || (div <= nbr2))
    {
        if ((nbr1 % div) == 0 && (nbr2 % div) == 0)
            pgcd = div;
        div++;
    }
    printf("%d", pgcd);
}

int main(int argc, char **argv)
{
    if (argc == 3)
        ft_pdcd(atoi(argv[1], atoi(argv[2])));
    return (0);
}