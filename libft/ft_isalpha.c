/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:37:35 by janrodri          #+#    #+#             */
/*   Updated: 2025/10/21 18:41:57 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Returns a +int if the char passed is alphabetic.
To clarify, the ascii written as 'j' still represents an 
int kind of data type. */
int	ft_isalpha(int c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
		return (c);
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
    printf("Result: %d\n", ft_isalpha('j')); //Change here the value
    return (0);
}
*/