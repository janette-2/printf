/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:37:29 by janrodri          #+#    #+#             */
/*   Updated: 2025/10/05 16:37:29 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Returns a +int if the char passed is alphanumeric. 
Remember an ascii written as 'A' is an int. */
int	ft_isalnum(int c)
{
	if (('0' <= c && c <= '9') || ('A' <= c && c <= 'Z')
		|| ('a' <= c && c <= 'z'))
		return (c);
	return (0);
}

/*
 #include <stdio.h>
 int main(void){
 // Change the value of the input digit
    printf("Result: %d\n", ft_isalnum(' '));
    return(0);
 }
*/