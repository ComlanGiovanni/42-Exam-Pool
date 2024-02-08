#include <stdlib.h>
#include <stdio.h>

int length(long num)
{
    int len;

    len = 0;
    if (num == 0)
        return (1);
    if (num < 0)
    {
        num *= -1;
        len++;
    }
    while(num > 0)
    {
        num /= 10;
        len++;
    }
    return(len);
}

char *ft_itoa(int nbr)
{
    int idx;
    long num;
    char *str;

    num = nbr;
    idx = length(num);
    str = ((char *)malloc(idx + 1));
    if (!str)
        return (NULL);
    str[idx--] = '\0';
    if (num == 0)
        str[0] = '0';
    else
    {
        if (num < 0)
        {
            str[0] = '-';
            num *= -1;
        }
        while (num > 0)
        {
            str[idx] = (num % 10) + '0';
            num /= 10;
            idx--;
        }
    }
    return (str);
}

int	main(void)
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(1));
	printf("%s\n", ft_itoa(42));
	printf("%s\n", ft_itoa(1001));
	printf("%s\n", ft_itoa(-0));
	printf("%s\n", ft_itoa(-2));
	printf("%s\n", ft_itoa(-24));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
}
