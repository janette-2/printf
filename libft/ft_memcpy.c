/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:38:05 by janrodri          #+#    #+#             */
/*   Updated: 2025/10/22 17:03:25 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Copies in *dest n bytes from *src. Returns a void* to the content copied.
You need to control that the pointers don't overlap, it's not managed. 
**The mem copied doesn't have an end sign like strings(\0),
 it doesn't follow the same format.
 dst points to the same place as dest, that is why you can 
 return either of them */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*dst;
	unsigned int	i;
	const char		*fuente;

	fuente = src;
	dst = dest;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		dst[i] = fuente[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
const char source1[]="12345";
char dst1[10];
const char source2[]="12345";
char dst2[10];

char *cpy1 = (char *)ft_memcpy(dst1,source1,5);
//To make the interpretation of the cast to char* properly, 
//Let's give a closure to the string.
cpy1[5] = '\0';
char *cpy2 = (char *)memcpy(dst2,source2,5);
cpy2[5] = '\0';

printf("Dest Result: %s\n", cpy1);
printf("Dest Result -original-: %s\n", cpy2); 

return(0);
}
*/
