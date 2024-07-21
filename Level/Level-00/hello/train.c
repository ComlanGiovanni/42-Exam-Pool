/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 17:29:03 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/21 23:55:53 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

static void	ft_putchar_fd(char character, int file_descriptor);
static void	ft_putstr_fd(char *string, int file_descriptor);

static void	ft_putchar_fd(char character, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write (file_descriptor, &character, sizeof(char));
}

static void	ft_putstr_fd(char *string, int file_descriptor)
{
	if (string == NULL)
		string = "(null)";
	if (file_descriptor >= 0x0)
		while (*string)
			ft_putchar_fd(*string++, STDOUT_FILENO);
}

static	size_t	ft_strlen(char *string)
{
	const char	*last_char_string_pointer;

	last_char_string_pointer = string;
	if (!string)
		return (0);
	while (*last_char_string_pointer != '\0')
		last_char_string_pointer++;
	return (last_char_string_pointer - string);
}

int	main(void)
{
	char	*string_to_display;

	string_to_display = "Hello World!\n";
	ft_putstr_fd(string_to_display, STDOUT_FILENO);
	return (EXIT_SUCCESS);
}

//write(STDOUT_FILENO, string_to_display, ft_strlen(string_to_display));
