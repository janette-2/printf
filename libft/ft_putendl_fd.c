/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:57:52 by janrodri          #+#    #+#             */
/*   Updated: 2025/10/09 17:48:04 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
/* Writes *s in the specified fd(file descriptor) folloed with a line break.
To remember the system fd's:
 FD	Name	Description
	0	stdin	(keyboard entry)
	1	stdout	(bash screen)
	2	stderr	(bash screen)
	 */
void	ft_putendl_fd(char *s, int fd)
{
	write (fd, s, ft_strlen(s));
	ft_putchar_fd('\n', fd);
}
/*
int main(void)
{
	char s[]="Example phrase.";
	ft_putendl_fd(s,1); 
}
*/
// To see the end line, when creating the compilation separate the
// cc and the a.out commands. In the cc add -o and when
// running a.out add ' | cat -A'.
// With that you'll see a $ when there is a \n.