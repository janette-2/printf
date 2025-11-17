/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:24:05 by janrodri          #+#    #+#             */
/*   Updated: 2025/11/17 19:49:56 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft/libft.h"

static unsigned int	count_digits(unsigned int n)
{
	unsigned int	temp;
	unsigned int	digits;

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

static char	*conversion_remains(unsigned int digits, unsigned int n,
		char	*hex_digits)
{
	unsigned int	rest;
	unsigned int	temp;
	char			*remains;

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

void	ft_put_pointer_fd(void *pointer, int fd, int *count)
{
	unsigned int	n_pointer;
	unsigned int	digits;
	char			*remains;
	char			*hex_digits;

	n_pointer = (unsigned long int) pointer;
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