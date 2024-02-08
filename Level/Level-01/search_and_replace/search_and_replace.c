#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void search_and_replace(char *str, char search, char replace)
{
    int idx;

    idx = 0;
    while (str[idx] != '\0')
    {
        if (str[idx] == search)
            ft_putchar(replace);
        else
            ft_putchar(str[idx]);
        idx++;
    }
}

int main (int argc, char **argv)
{
    if (argc == 4)
    {
        if (argv[2][1] == '\0' && argv[3][1] == '\0')
            search_and_replace(argv[1], argv[2][0], argv[3][0]);
    }
    ft_putchar('\n');
    return (0);
}