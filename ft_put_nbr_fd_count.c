/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr_fd_count.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:25:04 by janrodri          #+#    #+#             */
/*   Updated: 2025/11/17 18:37:25 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft/libft.h"

void	ft_putnbr_fd_count(int n, int fd, int *count)
{
	char	c;

	if (n == -2147483648)
		ft_check_bytes_count(count, write(fd, "-2147483648", 11));
	else
	{
		if (n < 0)
		{
			ft_check_bytes_count(count, write(fd, "-", 1));
			n = -n;
		}
		if (n >= 10)
			ft_putnbr_fd_count(n / 10, fd, count);
		c = n % 10 + '0';
		ft_check_bytes_count(count, write(fd, &c, 1));
	}
}
