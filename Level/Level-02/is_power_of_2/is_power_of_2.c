int	    is_power_of_2(unsigned int n)
{
    unsigned int power;

    power = 1;
    while (power <= n)
    {
        if (power == n)
            return (1);
        power *= 2;
    }
    return (0);
}

#include <stdio.h>

int main(void)
{
    printf("%d\n", is_power_of_2(2));
    printf("%d\n", is_power_of_2(4));
    printf("%d\n", is_power_of_2(6));
    printf("%d\n", is_power_of_2(9));
    return (0);
}