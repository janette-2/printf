/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:37:40 by janrodri          #+#    #+#             */
/*   Updated: 2025/10/05 16:37:40 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Returns a +int if the char passed is an ASCII. The case of c = 0 is 
different because instead od returning 'c'= 0, you need to return a +int,
which I have set to return (1).
 */
int	ft_isascii(int c)
{
	if (c > 0 && c <= 127)
		return (c);
	if (c == 0)
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("Result: %d\n", ft_isascii(0)); //Change the value here   
	printf("Result -original-: %d\n", isascii(0)); //Change the value here   
	return(0);
}
*/