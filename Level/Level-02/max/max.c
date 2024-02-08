int		max(int* tab, unsigned int len)
{
    int max;

    if (len <= 0 || tab == (void *)0)
        return (0);
    max = tab[--len];
    while (len--)
        if (tab[len] > max)
            max = tab[len];
    return (max);   
}


#include <stdio.h>

int main (void)
{
    int tab[5];
    tab[0] = 5;
    tab[1] = 8;
    tab[2] = 6;
    tab[3] = 1;
    tab[4] = 3;
    printf("%d", max(tab, 5));
    return (0);
}