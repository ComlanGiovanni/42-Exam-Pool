#include <string.h>

int		check_char(char c, const char *charset)
{
	int		i;

	i = -1;
	while (charset[++i])
		if (charset[i] == c)
			return (1);
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (!check_char(s[i], accept))
			return (i);
		i++;
	}
	return (i);
}