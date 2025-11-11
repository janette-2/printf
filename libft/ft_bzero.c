/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:37:10 by janrodri          #+#    #+#             */
/*   Updated: 2025/10/05 16:37:10 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Fill n bytes (starting in the addres of *s) with 0's.
Doesn't return anything.*/
void	ft_bzero(void *s, size_t n)
{
	char	*buffer;
	size_t	i;

	buffer = s;
	i = 0;
	while (i < n)
	{
		buffer[i] = '\0';
		i++;
	}
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char string1[]= "1234567890";//lenght= 11
    char string2[]= "1234567890";//lenght= 11
    ft_bzero(string1, 8);
    bzero(string2, 8);
    int i = 0;
    while(i < 11)
    {
        printf("Result: %x\n", string1[i]);  //As hexadecimal, in which '\0' = 0
        i++;
    }  
    int j = 0;
    while(j < 11)
    {
        printf("Result -original-: %x\n", string2[j]);
        j++;
    }
        
    return(0);
}
*/