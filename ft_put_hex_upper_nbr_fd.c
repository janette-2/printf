/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex_upper_nbr_fd.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:24:54 by janrodri          #+#    #+#             */
/*   Updated: 2025/11/17 18:43:26 by janrodri         ###   ########.fr       */
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

void	ft_put_hex_upper_nbr_fd(unsigned int n, int fd, int *count)
{
	unsigned int	digits;
	char			*hex_digits;
	char			*remains;
	int				written_bytes;

	hex_digits = "0123456789ABCDEF";
	digits = count_digits(n);
	remains = conversion_remains(digits, n, hex_digits);
	written_bytes = write(fd, "0X", 2);
	ft_check_bytes_count(count, written_bytes);
	written_bytes = write(fd, remains, ft_strlen(remains));
	ft_check_bytes_count(count, written_bytes);
	free(remains);
}

/* #include <limits.h>
#include <stdio.h>
int main(void)
{
	printf("UINT_MAX: %u\n", UINT_MAX);
	printf("Digits for max: %d\n",count_digits(4294967294));
	unsigned int n = 4294967295; 
	ft_put_HEX_nbr_fd(n, 1); // HEX: 0x ffff ffff

	write(1, "\n", 1);

	unsigned int n1 = 0;
	ft_put_HEX_nbr_fd(n1, 1); // HEX: 0x0

	write(1, "\n", 1);

	unsigned int n2 = -2;
	ft_put_HEX_nbr_fd(n2, 1); // Maximo - 2: (ffff ffff) - 2 = 0x ffff fffe
	
	write(1, "\n", 1);

	unsigned int n3 = 10;
	ft_put_HEX_nbr_fd(n3, 1); // HEX: 0xa

	write(1, "\n", 1);

	unsigned int n4 = 1560; 
	ft_put_HEX_nbr_fd(n4, 1); // HEX: 0x618
	

	return (0);

}  */
