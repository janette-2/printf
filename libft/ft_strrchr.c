/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:39:11 by janrodri          #+#    #+#             */
/*   Updated: 2025/10/05 16:39:11 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Searchs for the given 'c' in the string *s, starting to search from
the back. If found returns it's memory address, if not returns NULL.
*/
char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	len;

	len = ft_strlen((char *)s);
	i = len;
	if ((char) c == '\0')
		return ((char *) &s[i]);
	i = i - 1;
	while (i > -1)
	{
		if (s[i] == (char) c)
			return ((char *) &s[i]);
		i--;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int main (void)
{
	char str[] = "abcdef";
	printf("Result: %p\n", ft_strrchr(str, 'c'));
	printf("Result -original-: %p\n", strrchr(str, 'c'));
	return (0);
}
*/