/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:36:49 by janrodri          #+#    #+#             */
/*   Updated: 2025/10/22 17:23:15 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Fills n bytes of *s with char c. Returns a *void to the filled *s. 
**
char *buffer; Used to specify the progress 1 by 1 byte 
and read the buffer properly. 

** Don't need a \0 here because it's not a string*/
void	*ft_memset(void *s, int c, size_t n)
{
	char			*buffer;
	unsigned char	caracter;
	unsigned int	i;

	buffer = s;
	caracter = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		buffer[i] = caracter;
		i++;
	}
	return (buffer);
}

/*
#include <string.h>
#include <stdio.h>

int main(void)
{
char string[] = "1234567890";
//Cast the output to be readable as 'string'
printf("Data: %s\n", (char *) ft_memset(string, '*', 4));
printf("Data -original-: %s\n",(char *) memset(string, '*', 4));
}
*/
