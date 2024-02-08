#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_check_tab(int *ascii, char *str)
{
    int idx;

    idx = 0;
    while (str[idx] != '\0')
    {
        if (ascii[(int)str[idx]] == 1)
        {
            ft_putchar(str[idx]);
            ascii[(int)str[idx]] = 0;
        }
        idx++;
    }
}

void ft_check_s2(int *ascii, char *str)
{
    int idx;

    idx = 0;
    while (str[idx] != '\0')
    {
        if (ascii[(int)str[idx]] == 0)
            ascii[(int)str[idx]] = 1;
        idx++;
    }
}

void inter(char *s1, char *s2)
{
    int ascii[256] = {0};
    ft_check_s2(ascii, s2);
    ft_check_tab(ascii ,s1);
}

int main (int argc, char **argv)
{
    if (argc == 3)
        inter(argv[1], argv[2]);
    ft_putchar('\n');
    return (0);
}