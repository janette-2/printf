/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:38:00 by janrodri          #+#    #+#             */
/*   Updated: 2025/10/05 16:38:00 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Search n bytes from *s1 and *s2 comparing each index. 
The moment they differ the result is given.
return(src1[i] - src2[i]);  // If s1 >, int positive. If s2 >, int negative.
return (0); //If n = 0 and s1 == s2 (until n) */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*src1;
	unsigned char	*src2;

	src1 = (unsigned char *)s1;
	src2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (src1[i] != src2[i])
			return (src1[i] - src2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char s1[] = "12345"; //len = 6
	char s2[] = "12345"; //len = 6
	printf("Result: %d\n", ft_memcmp(s1,s2, 3));
	printf("Result -original-: %d\n", memcmp(s1,s2, 3));
}
*/