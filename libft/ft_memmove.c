/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:38:11 by janrodri          #+#    #+#             */
/*   Updated: 2025/10/22 17:09:55 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Copies the first n bytes of *src in *dest, managing overlaps.
Returns a *void to the copied content in *dest. 
When overlapping (src < dest); starts copying and pasting 
at the last index of both pointers.
(dest[n-1] = src[n-1];)
This avoids overlapping any content at source because
is always read before being copied.
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*source;
	char			*destination;

	destination = (char *) dest;
	source = (char *) src;
	i = n;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (source < destination)
	{
		while (i > 0)
		{
			destination[i - 1] = source [i - 1];
			i--;
		}
	}
	else
		destination = ft_memcpy(destination, source, n);
	return (destination);
}

/*
#include <stdio.h>
int main(void)
{
	// EXAMPLE WITH OVERLAPPING
	char buffer[] = "abcdef"; //len = 7
	char * result = (char *) ft_memmove(buffer + 2, buffer, 2);
	//Start the destination at 2nd element of source (overlapping)
	
	int i;
	i = 0;
	char buffer_copy[] = "abcdef"; //Original content
	while(i < 7)
	{
	   printf("Original: %c\n", buffer_copy[i]);
	   i++;
	}
	i = 0;
	while(i < (int) ft_strlen(result)) 
	{
		printf("Copied: %c\n", result[i]);
		i++;
	}
	
	// EXAMPLE WITHOUT OVERLAPPING
	char src[7] = "abcdef";
	//different buffers placed separetely in memory
	char dest[15];
	char * result_01 = (char *) ft_memmove(dest, src, 2);
	
	i = 0;
	while(i < 7)
	{
	   printf("Original_01: %c\n", src[i]);
	   i++;
	}
	i = 0;
	while(i < 7)
	{
		printf("Copied_01: %c\n", result_01[i]);
		i++;
	}
}
*/
