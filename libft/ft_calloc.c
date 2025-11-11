/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:37:18 by janrodri          #+#    #+#             */
/*   Updated: 2025/10/23 15:32:47 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/* FILLS A BUFFER[nmemb] WITH 0(hex)/'\0'(dec)
Size is the number of bytes that represent 1 cell. 
nmemb is the amount of cells you want to book.
2^32, the max amount of bytes and value(2^32 - 1) 
that the structure can withold, using the max amount 
of bytes(int = 4B), using 1 cell for all combinations posible.
4294967295  == MAX VALUE OF AN UNSIGNED LONG
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*buffer;
	size_t	i;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > 4294967295 / size)
		return (NULL);
	buffer = malloc(nmemb * size);
	i = 0;
	if (buffer == NULL)
		return (NULL);
	while (i < (nmemb * size))
	{
		buffer[i] = '\0';
		i++;
	}
	return (buffer);
}

/*
#include <stdio.h>
int main(void)
{
	char *res1 = ft_calloc(4, 1);
	printf("Result: %p\n", res1); //for a buffer of 4 chars (size = 1B)

	
	printf("-------------  FOR BUFFER OF 4 CHARS ----------\n");
	int i = 0;
	while(i < 4)
	{
		printf("Element %d: %x\n", i, res1[i]); // In HEX to see the '\0' as 0
		printf("Direction %d: %p\n", i, &res1[i]);
		i++;
	}
	
}
*/