/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 17:40:43 by janrodri          #+#    #+#             */
/*   Updated: 2025/10/22 16:54:40 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Erases any char of 'set' found in the beginnig and the end of 's1'. 
Until not coincidences are found in 's1' anymore. If the entire s1 is
fully erased (j <= i), returns an empty string ("").
 */
static char	*ft_strtrim_empty(void)
{
	char	*empty;

	empty = malloc(1);
	if (!empty)
		return (NULL);
	empty[0] = '\0';
	return (empty);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*trim;
	unsigned int	i;
	unsigned int	j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j > i && s1[j - 1] && ft_strchr(set, s1[j - 1]))
		j--;
	if (j <= i)
		return (ft_strtrim_empty());
	trim = (char *) malloc((j - i) + 1);
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, &s1[i], j - i + 1);
	return (trim);
}

/*
#include <stdio.h>
int main(void){
	char s1[]="aAHolaAbc";
	char set[]="abc";
	printf("Result: %s\n", ft_strtrim(s1,set));
}
*/