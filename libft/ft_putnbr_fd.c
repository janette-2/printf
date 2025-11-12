/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 15:08:11 by janrodri          #+#    #+#             */
/*   Updated: 2025/11/12 18:02:12 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Writes the int n in the specified fd (file descriptor).
To remember the system fd's:
 FD	Name	Description
	0	stdin	(keyboard entry)
	1	stdout	(bash screen)
	2	stderr	(bash screen)
*/

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = -n;
		}
		if (n >= 10)
			ft_putnbr_fd(n / 10, fd);
		c = n % 10 + '0';
		write(fd, &c, 1);
	}
}
/* 
int main(void)
{
	int n = 123;
	ft_putnbr_fd(n, 1);
} */