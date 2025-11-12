/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int		ft_find_percentage.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 19:24:43 by janrodri          #+#    #+#             */
/*   Updated: 2025/11/11 19:25:48 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft/libft.h"

int	ft_find_percentage(char const *string)
{
	int		type;
	char	*pos_sign;

	pos_sign = ft_memchr(string, '%', ft_strlen(string));
	if (!pos_sign || *(pos_sign + 1) == '\0')
		return (-1);
	type = pos_sign[1];
	return (type);
}

/* #include <stdio.h>
int main(void)
{
	char *s = "%f";
	char type = ft_find_percentage(s);
	printf("%c\n",type);

	char *s1 = "%";
	char type1 = ft_find_percentage(s1);
	printf("%c\n",type1);

	char *s2 = "";
	char type2 = ft_find_percentage(s2);
	printf("%c\n",type2);

	char *s3 = "a";
	char type3 = ft_find_percentage(s3);
	printf("%c\n",type3);

	char *s4 = "%%";
	char type4 = ft_find_percentage(s4);
	printf("%c\n",type4);


	return (0);
} */
