#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void alpha_mirror(char *str)
{
    int idx;
    idx = 0;
    while (str[idx] != '\0')
    {
        if (str[idx] >= 'a' && str[idx] <= 'z')
            str[idx] = ('m' - (str[idx] - 'n'));
        else if (str[idx] >= 'A' && str[idx] <= 'Z')
            str[idx] = ('M' - (str[idx] - 'N'));
        ft_putchar(str[idx]);
        idx++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        alpha_mirror(argv[1]);
    ft_putchar('\n');
    return (0);
}
