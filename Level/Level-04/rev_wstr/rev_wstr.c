/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:06:11 by gcomlan           #+#    #+#             */
/*   Updated: 2024/02/03 21:29:01 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

char **ft_rev_wstr(char *str)
{
	int idx;
	int row;
	int column;
	char **tab;

	idx = 0;
	row = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
	while (str[idx] != '\0')
	{
		if (str[idx] > ' ')
		{
			column = 0;
			if(!(tab[row] = (char *)malloc(sizeof(char) * 4092)))
				return (NULL);
			while (str[idx] > ' ')
			{
				tab[row][column] =  str[idx];
				column++;
				idx++;
			}
			tab[row][column] = '\0';
			row++;
		}
		else
			idx++;
	}
	tab[row] = NULL;
	return (tab);
}

int	main(int argc, char **argv)
{
	int idx;
	char **word;
	if (argc == 2)
	{
		word = ft_rev_wstr(argv[1]);
		while (word[idx] != NULL)
			idx++;
		idx--;
		while (idx >= 0)
		{
			ft_putstr(word[idx]);
			if (idx > 0)
				ft_putchar(' ');
			idx--;
		}
	}
	ft_putchar('\n');
	return (0);
}


/*

#include <unistd.h>

void		rev_wstr(char *s, int first)
{
	int		start;
	int		i;

	i = 0;
	if (s[i])
	{
		while (s[i] && (s[i] == ' ' || s[i] == '\t'))
			i++;
		if (!s[i])
			return ;
		start = i;
		while (s[i] && s[i] != ' ' && s[i] != '\t')
			i++;
		rev_wstr(&s[i], 0);
		write(1, &s[start], i - start);
		if (!first)
			write(1, " ", 1);
	}
}

int			main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1], 1);
	write(1, "\n", 1);
	return (0);
}



void	rev_wstr(char *str)
{
	int	idx;
	int	j;
	int	first_word;

	idx = 0;
	first_word = 1;
	while (str[idx] != '\0')
		idx++;
	while (idx >= 0)
	{
		while (idx >= 0 && (str[idx] == '\0' || is_space(str[idx])))
			idx--;
		j = idx;
		while (j >= 0 && !is_space(str[j]))
			j--;
		if (first_word == 0)
			ft_putchar(' ');
		write(1, str + j + 1, idx - j);
		first_word = 0;
		idx = j;
	}
}*/

/*

int		str_length(char *str)
{
	int	len = 0;

	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

int		iswhitespace(char chr)
{
	return (chr == ' ' || chr == '\t');
}

void	print_reverse(char *str)
{
	// let's use three pointers to traverse the string backwards
	// the fast pointer will, dah, move faster then the others
	// mainly:
	int fast;	// will be placed at the start of a word
	int slow;	// will be placed at the end of a word
	int curr;	// will traverse the current word so we can write to stdout

	// shall we start at the end of the string
	fast = str_length(str) - 1;
	slow = fast;
	curr = fast;

	// until we reach the beginning of the string
	while (fast >= 0)
	{
		// here, fast should be at the last char of a word
		// so we place every pointer in the same place
		slow = fast;
		curr = fast;
		// now we place fast at the first char of the current word
		while (fast >= 0 && !iswhitespace(str[fast]))
			fast--;
		fast++;
		// we'll place curr where fast is, so we can write the curr word
		curr = fast;
		while (curr <= slow)
		{
			write(1, &str[curr], 1);
			curr++;
		}
		// now that we wrote the word, we add a whitespace
		// except that we should not add a whitespace for the last word
		if (fast > 0)
			write(1, " ", 1);
		// and we interrupt the loop if fast is at the first char
		// if it is not, so we move it two steps back
		fast--;
		fast--;
		// now we should be at the last char of previous word
		// so we can just repeat the process
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		print_reverse(av[1]);
	write(1, "\n", 1);
	return (1);
}
*/



/*

#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	**ft_split(char *str)
{
	int i;
	int i2;
	int i3;
	char **tab;

	i = 0;
	i2 = 0;
	tab = (char**)malloc(sizeof(char) * 100);
	while (str[i] != '\0')
	{
		if (str[i] > 32)
		{
			i3 = 0;
			tab[i2] = (char*)malloc(sizeof(char) * 100);
			while (str[i] > 32)
			{
				tab[i2][i3] = str[i];
				i++;
				i3++;
			}
			tab[i2][i3] = '\0';
			i2++;
		}
		else
			i++;
	}
	tab[i2] = 0;
	return (tab);
}

int		main(int ac, char **av)
{
	int i;
	char **words;

	i = 0;
	if (ac == 2)
	{
		words = ft_split(av[1]);
		while (words[i] != 0)
			i++;
		i--;
		while (i >= 0)
		{
			ft_putstr(words[i]);
			if (i > 0)
				write(1, " ", 1);
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}

*/