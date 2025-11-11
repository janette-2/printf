/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:47:18 by janrodri          #+#    #+#             */
/*   Updated: 2025/10/22 18:32:04 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

static int	ft_itoa_count(int n)
{
	int	count;
	int	cpy;

	count = 0;
	if (n < 0)
	{
		count = 1;
		n = -n;
	}
	cpy = n;
	while (cpy > 0 || n == 0)
	{
		count++;
		cpy = cpy / 10;
		n = 1;
	}
	return (count);
}

static char	*ft_itoa_string(int temp, int count, char *s)
{
	while (temp > 0 || count > 0)
	{
		s[--count] = temp % 10 + '0';
		temp = temp / 10;
	}
	return (s);
}

static char	*ft_itoa_intmin(void)
{
	char	*int_min;

	int_min = (char *)malloc(12);
	if (int_min == NULL)
		return (NULL);
	ft_strlcpy(int_min, "-2147483648", 12);
	return (int_min);
}

char	*ft_itoa(int n)
{
	char	*s;
	char	*int_min;
	int		count;
	int		temp;
	int		neg;

	temp = n;
	count = 0;
	neg = (n < 0);
	if (n == -2147483648)
	{
		int_min = ft_itoa_intmin();
		return (int_min);
	}
	if (temp < 0)
		temp = -temp;
	count = ft_itoa_count(n);
	s = (char *)malloc(count + 1);
	if (s == NULL)
		return (NULL);
	s[count] = '\0';
	s = ft_itoa_string(temp, count, s);
	if (neg)
		s[0] = '-';
	return (s);
}

/* 
#include<stdio.h>
int main(void){
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(123));
	printf("%s\n", ft_itoa(-456));
	printf("%s\n", ft_itoa(-2147483648));
}
}*/
