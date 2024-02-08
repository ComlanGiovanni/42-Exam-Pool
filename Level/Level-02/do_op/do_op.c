#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void do_op(char *s1, char op, char *s2)
{
    int first;
    int second;
    int result;

    first = atoi(s1);
    second = atoi(s2);
    result = 0;
    if (op == '+')
        result = first + second;
    else if (op == '-')
        result = first - second;
    else if (op == '*')
        result = first * second;
    else if (op == '/')
        result = first / second;
    else if (op == '%')
        result = first % second;
    printf("%d", result);

}

int main (int argc, char **argv)
{
    if (argc == 4)
    {
        if (argv[2][1] == '\0')
            do_op(argv[1], argv[2][0], argv[3]);
    }
    printf("\n");
    return (0);
}