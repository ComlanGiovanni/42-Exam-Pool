#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void maff_alpha(void)
{
    char alphabet;

    alphabet = 'a';
    while (alphabet <= 'z')
    {
        if ((alphabet % 2) == 0)
            ft_putchar(alphabet - ' ');
        else
            ft_putchar(alphabet);
        alphabet++;
    }
    ft_putchar('\n');
}

int main (void)
{
    maff_alpha();
    return (0);
}