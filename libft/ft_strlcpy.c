/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:38:44 by janrodri          #+#    #+#             */
/*   Updated: 2025/10/05 16:38:44 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Copies the content of src to an empty dst limited in size by dsize,
//  it may or may not fit all the src content. 
//Returns the lenght of the source content to be copied from in dst.
//size_t len = ft_strlen(src); //Declared here to see the first 
// element that is pointed by the src, not the last 
//while((src[i] != '\0') && (i < dsize)) 
//dsize always needs to make sure it has at leat the same space as *dst
// Always copy size-1 chars because the last one is 
//for the NUL-termination always.

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (len);
	while ((i < size - 1) && (src[i] != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

/*
#include<string.h>
#include<stdio.h>
int main(void)
{
	char src[] = "reference content.";//len = 18
	char dest[50];//wide length of dest[]
	printf("Result: %ld\n", ft_strlcpy(dest , src, 12)); 
	//modify the extend of copied characters
	printf("Dest: %s\n", dest);
	return(0);
}
*/