/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:37:49 by janrodri          #+#    #+#             */
/*   Updated: 2025/10/09 00:38:06 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
// Returns a +int if the char passed is printable.
int	ft_isprint(int c)
{
	if (' ' <= c && c <= '~')
		return (c);
	return (0);
}
/*
 #include <stdio.h>
 #include <ctype.h>
 int main(void){
	printf("Result: %d\n", ft_isprint(31));// Change the value of the input digit
	printf("Result -original-: %d\n", isprint(31));
	return(0);
 }
*/
