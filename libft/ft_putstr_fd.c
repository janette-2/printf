/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 12:25:52 by janrodri          #+#    #+#             */
/*   Updated: 2025/11/12 18:02:12 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Writes the string *s in the specified fd(file descriptor).
To remember the system fd's:
 FD	Name	Description
	0	stdin	(keyboard entry)
	1	stdout	(bash screen)
	2	stderr	(bash screen) */
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
/*
int main(void)
{
	char s[]="Example phrase.";
	//It will write in the 'output stream' of the shell [fd = 1]. 
	ft_putstr_fd(s, 1);
}
*/