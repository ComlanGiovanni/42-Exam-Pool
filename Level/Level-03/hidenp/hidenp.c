#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

int ft_strlen(char *str)
{
    return (str && *str ? ft_strlen(str + 1) + 1 : 0);
}

void ft_hidenp(char *s1, char *s2)
{
    int idx_1;
    int idx_2;

    idx_1 = 0;
    idx_2 = 0;
    while (s2[idx_2] != '\0')
    {
        if (s1[idx_1] == s2[idx_2])
            idx_1++;
        idx_2++;
    }
    if (idx_1 == ft_strlen(s1))
		ft_putchar('1');
	else
		ft_putchar('0');
}

int main (int argc, char **argv)
{
    if (argc == 3)
        ft_hidenp(argv[1], argv[2]);
    ft_putchar('\n');
    return (0);
}