/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_nbr_fd.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:23:59 by janrodri          #+#    #+#             */
/*   Updated: 2025/11/17 18:24:00 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_put_unsigned_nbr_fd( unsigned int n, int fd, int *count)
{
	char	c;

	if (n >= 10)
		ft_put_unsigned_nbr_fd(n / 10, fd, count);
	c = n % 10 + '0';
	ft_check_bytes_count(count, write(fd, &c, 1));
}

/* int main(void)
{
	unsigned int n = 4294967295;
	ft_put_unsigned_nbr_fd(n, 1);

	write(1, "\n", 1);

	unsigned int n1 = 0;
	ft_put_unsigned_nbr_fd(n1, 1);

	write(1, "\n", 1);

	unsigned int n2 = -10;
	ft_put_unsigned_nbr_fd(n2, 1);
	
	write(1, "\n", 1);

	unsigned int n3 = 10;
	ft_put_unsigned_nbr_fd(n3, 1);
	

	return (0);

} */