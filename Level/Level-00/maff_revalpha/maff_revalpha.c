#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void maff_revalpha(void)
{
    char alphabet;

    alphabet = 'z';

    while (alphabet >= 'a')
    {
        if ((alphabet % 2) == 0)
            ft_putchar(alphabet);
        else
            ft_putchar(alphabet - ' ');
        alphabet--;
    }
    ft_putchar('\n');
}
int main (void)
{
    maff_revalpha();
    return (0);
}