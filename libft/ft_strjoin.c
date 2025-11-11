/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 17:21:55 by janrodri          #+#    #+#             */
/*   Updated: 2025/10/21 21:17:05 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* j = ft_strlcat(join, s2, len_s2 + len_s1 + 1); 
//returns total chars, without the '\0', but specified in parameters. */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	join = malloc(len_s1 + len_s2 + 1);
	if (join == NULL)
		return (NULL);
	if (ft_strlcpy(join, s1, len_s1 + 1) == len_s1)
		i = 1;
	j = ft_strlcat(join, s2, len_s2 + len_s1 + 1);
	if (i == 1 && j == len_s1 + len_s2)
		return (join);
	return (NULL);
}
/*
#include <stdio.h>
int main(void)
{
	char s1[]="Hola ";
	char s2[]="mundo.";
	printf("Result: %s\n", ft_strjoin(s1, s2));
}
*/