/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:42:04 by janrodri          #+#    #+#             */
/*   Updated: 2025/10/21 22:02:19 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*start_out_of_string(void)
{
	char			*sub;

	sub = malloc(1);
	if (!sub)
		return (NULL);
	sub[0] = '\0';
	return (sub);
}

static char	*len_greater_than_string(char const *s, unsigned int start)
{
	unsigned int		i;
	char				*sub;

	sub = malloc((ft_strlen(s) - start) + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < ((ft_strlen(s) - start) + 1))
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*sub;

	if (s == NULL)
		return (NULL);
	i = 0;
	if (start >= ft_strlen(s))
		return (start_out_of_string());
	else if ((ft_strlen(s) - start) < len)
		return (len_greater_than_string(s, start));
	else
	{
		sub = malloc(len + 1);
		if (sub == NULL)
			return (NULL);
		i = 0;
		while (s[start + i] != '\0' && i < len)
		{
			sub[i] = s[start + i];
			i++;
		}
		sub[i] = '\0';
		return (sub);
	}
}

/*
#include <stdio.h>
int main(void)
{
	char string[]="1234567890"; //len = 11
	printf("Substring :%s\n", ft_substr(string, 4, 6));
	printf("Original string :%s\n", string);
}
*/