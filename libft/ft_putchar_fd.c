/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 12:15:55 by janrodri          #+#    #+#             */
/*   Updated: 2025/11/11 18:47:19 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Writes char c in the specified fd (file descriptor). 

** FD	Name	Description
	0	stdin	(keyboard entry)
	1	stdout	(bash screen)
	2	stderr	(bash screen)

	**write(fd, &c, 1); //Writes in fd the char c
(by calling its memdirection/pointer), which c is 1 Byte. */
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
int main(void)
{
	ft_putchar_fd('J', 1);
	//It will write in the 'output stream' of the shell [fd = 1]. 
}
*/