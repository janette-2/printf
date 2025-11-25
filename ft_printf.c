/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:22:37 by janrodri          #+#    #+#             */
/*   Updated: 2025/11/25 19:29:04 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	write_and_count(char const *format, va_list args, int *count)
{
	char	type;
	int		written_bytes;
	int		i;

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			type = format[i + 1];
			ft_format(type, args, count);
			i = i + 2;
		}
		else
		{
			written_bytes = write(1, &format[i], 1);
			ft_check_bytes_count(count, written_bytes);
			i++;
		}
	}
	return (*count);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = 0;
	count = write_and_count(format, args, &count);
	va_end(args);
	return (count);
}
