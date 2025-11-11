/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:39:02 by janrodri          #+#    #+#             */
/*   Updated: 2025/10/10 18:50:20 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big,	const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && (i < len))
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j < len) && big[i + j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char *s1 = "abcdefgh"; // len = 9
	char *s2 = "bg"; // len = 3
	printf("Result: %p\n", ft_strnstr(s1, s2, 8));
	printf("Result: %s\n", ft_strnstr(s1, s2, 8));
	//printf("Result: %d\n", strnstr(s1, s2, 6)); NO FUNCIONA
	
	// BUCLE DE CHARS Y NºMEMORIA DE TODA LA CADENA 'BIG'
	printf("---------BIG------------\n");
	int i;
	i = 0;
	while(i < 9)
	{
		printf("Caracter %d: %c\n", i, s1[i]);
		printf("Direccion %d: %p\n", i, &s1[i]);
		i++;
	}
}
*/