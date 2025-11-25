/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:24:05 by janrodri          #+#    #+#             */
/*   Updated: 2025/11/25 19:47:29 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static long unsigned int	count_digits(long unsigned int n)
{
	long unsigned int	temp;
	long unsigned int	digits;

	digits = 0;
	temp = n;
	if (n == 0)
		digits = 1;
	else
	{
		while (temp != 0)
		{
			temp = temp / 16;
			digits++;
		}
	}
	return (digits);
}

static char	*conversion_remains(long unsigned int digits, long unsigned int n,
		char	*hex_digits)
{
	long unsigned int	rest;
	long unsigned int	temp;
	char				*remains;

	remains = malloc(digits * sizeof(char) + 1);
	if (!remains)
		return (NULL);
	remains[digits] = '\0';
	temp = n;
	if (n == 0)
		remains[0] = '0';
	while (temp > 0)
	{
		rest = temp % 16;
		remains[digits - 1] = hex_digits[rest];
		temp = temp / 16;
		digits--;
	}
	return (remains);
}

static size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	ft_put_pointer_fd(void *pointer, int fd, int *count)
{
	long unsigned int	n_pointer;
	long unsigned int	digits;
	char				*remains;
	char				*hex_digits;

	if (!pointer)
	{
		ft_check_bytes_count(count, write(fd, "(nil)", 5));
		return ;
	}
	n_pointer = (long unsigned int) pointer;
	hex_digits = "0123456789abcdef";
	digits = count_digits(n_pointer);
	remains = conversion_remains(digits, n_pointer, hex_digits);
	ft_check_bytes_count(count, write(fd, "0x", 2));
	ft_check_bytes_count(count, write(fd, remains, ft_strlen(remains)));
	free(remains);
}

/* 
int main (void)
{
	char *string;
	int	count;

	string = "";
	count = 0;
	ft_put_pointer_fd(string, 1, &count);

	return (0);
} */