/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:06:16 by gcomlan           #+#    #+#             */
/*   Updated: 2024/02/03 15:19:21 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void ft_putstr(char *str)
{
    while(*str)
        write(1, str++, 1);
}

void ft_putchar(char c)
{
	write(1, &c , 1);
}

char **ft_split(char *str)
{
	int idx;
	int row;
	int column;
	char **split;

	idx = 0;
	row = 0;
	split = (char **)malloc(sizeof(char *) * 256);
	if (!split)
		return (NULL);
	while (str[idx] == ' ' || str[idx] == '\t' || str[idx] == '\n')
		idx++;
	while(str[idx] != '\0')
	{
		column = 0;
		if (!(split[row] = (char *)malloc(sizeof(char) * 4092)))
			return (NULL);
		while (str[idx] != ' ' && str[idx] != '\t' && str[idx] != '\n')
		{
			split[row][column] = str[idx];
			column++;
			idx++;
		}
		while (str[idx] == ' ' || str[idx] == '\t' || str[idx] == '\n')
			idx++;
		split[row][column] = '\0';
		row++;
	}
	split[row] = NULL;
	return(split);
}

int		main(int argc, char **argv)
{
	int idx;
	char **tab;

	idx = 1;
	if (argc > 1)
	{
		tab = ft_split(argv[1]);
		while (tab[idx])
		{
			ft_putstr(tab[idx]);
			ft_putchar(' ');
			idx++;
		}
		ft_putstr(tab[0]);
	}
	ft_putchar('\n');
	return (0);
}