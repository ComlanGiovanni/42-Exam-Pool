void ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

/*
void	ft_swap(int *a, int *b)
{
	int	tmp;

	if (a == ((void *)0) || b == ((void *)0))
		return ;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_swap(int *a, int *b)
{
	(*a ^= *b), (*b ^= *a), (*a ^= *b);
}

void	ft_swap(int *a, int *b)
{
    (*a = *a ^ *b);
    (*b = *b ^ *a);
    (*a = *a ^ *b);
}


*/
