/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 22:11:18 by janrodri          #+#    #+#             */
/*   Updated: 2025/10/21 18:40:46 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Takes the items in 's' and pass them to the 'f(index,&char)', 
 this only executes.
 With those conversions executed, the function end.
 if (!s || !f) // IF NULL*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
void ft_ex(unsigned int i, char *c)
{
	(void) i;
	*c = ft_toupper(c[0]);  
	 //Converts to capitals, changing the original pointer 
	//  to the modified value. 
}

#include <stdio.h>
int main(void)
{
	char s[]="abcdefghij";
	ft_striteri(s,ft_ex);
	printf("Result: %s\n", s);
}
*/