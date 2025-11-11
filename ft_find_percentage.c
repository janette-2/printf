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
	char	type;
	int		*pos_sign;

	pos_sign = ft_memchr(string, '%', ft_strlen(string));
	type = pos_sign[1];
	return (type);
}

#include <stdio.h>
int main(void)
{
	char *s = "%s";
	int type = ft_find_percentage(s);
	printf("%d",type);
	return (0);
}
