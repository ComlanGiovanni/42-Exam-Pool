#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void first_word(char *str)
{
    int idx;

    idx = 0;
    while (str[idx] == ' ' || str[idx] == '\t')
        idx++;
    while (str[idx] != '\0' && str[idx]!= ' ' && str[idx] != '\t')
    {
        ft_putchar(str[idx]);
        idx++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        first_word(argv[1]);
    ft_putchar('\n');
    return (0);
}
