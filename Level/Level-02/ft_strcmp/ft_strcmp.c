int    ft_strcmp(char *s1, char *s2)
{
    int idx;
    idx = 0;
    while (s1[idx] != '\0' && s2[idx] != '\0' && (s1[idx] == s2[idx]))
        idx++;
    return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
}

#include <stdio.h> // For printf
#include <string.h> //For strcmp

int	main(void)
{
	printf("%d\n", ft_strcmp("hello", "hello"));
	printf("%d\n", strcmp("hello", "hello"));
	printf("%d\n", ft_strcmp("hel", "hello"));
	printf("%d\n", strcmp("hel", "hello"));
	printf("%d\n", ft_strcmp("hello", ""));
	printf("%d\n", strcmp("hello", ""));
	//printf("%d\n", ft_strcmp(NULL, "null"));
	return (0);
}










int		ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char*)s1;
	ss2 = (unsigned char*)s2;
	i = 0;
	while (ss1[i] == ss2[i] && ss1[i] && ss2[i])
		i++;
	return (ss1[i] - ss2[i]);
}
