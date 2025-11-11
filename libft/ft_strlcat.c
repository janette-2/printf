/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:38:32 by janrodri          #+#    #+#             */
/*   Updated: 2025/10/05 16:38:32 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* If dsize can hold all the content of 'dst', 
we star copying the content of 'src' in 'dst'.
If not, it stays as it is each string, and returns
 the size of dsize buffer plus len 'src'.
If dsize is big enough for 'dst' and more, 
'dst' concatenates the content of 'src' until 
reaching the limit of char+'\0' determined by disize. 
Returning the len_d + len_s
if(dsize <= len_d) //When the space given is not even enough just for 'dst',
it remains the same and returns the size of dsize + len_src
i = len_d //In the case that dsize is able to contain all 'dst' and more,
 we start already at the end of characters.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	j;
	size_t	len_s;
	size_t	len_d;

	len_s = ft_strlen(src);
	len_d = ft_strlen(dst);
	if (dsize <= len_d)
		return (dsize + len_s);
	i = len_d;
	j = 0;
	while ((src[j] != '\0') && (i < dsize - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len_s + len_d);
}
/*
#include<string.h>
#include<stdio.h>
int main(void)
{
	char src[] = " mundo";//len = 6
	char dest[50]="Hola";//wide enough length of dest[], len = 4
	printf("Result: %ld\n", ft_strlcat(dest , src, 11)); 
	//modify the extend of the buffer (with '\0')
	printf("Dest: %s\n", dest);

	//char src1[] = " mundo";//len = 6
	//char dest1[50]="Hola";//wide enough length of dest[], len = 4
	//printf("Result -orig-: %d\n", strlcat(dest1 , src1, 2)); 
	//modify the extend of the buffer
	//printf("Dest -orig-: %s\n", dest1);
	
	return(0);
}
*/