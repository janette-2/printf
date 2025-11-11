/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 21:11:38 by janrodri          #+#    #+#             */
/*   Updated: 2025/10/22 17:25:35 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*Takes the items in 's' and pass them to the 'f(index,char)', 
this returns a char. With those chars returned, a string is 
formed and returned as the result.*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		len;
	int		i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
char ft_ex(unsigned int i, char c)
{
	(void) i;
	return(ft_toupper(c));   //Converts to capitals 
}

#include <stdio.h>
int main(void)
{
	char s[]="abcdefghij";
	printf("Result: %s\n",ft_strmapi(s,ft_ex));
}
*/