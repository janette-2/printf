/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_count.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:23:50 by janrodri          #+#    #+#             */
/*   Updated: 2025/11/25 19:32:55 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr_fd_count(char *s, int fd, int *count)
{
	if (s == NULL)
		ft_check_bytes_count(count, write(fd, "(null)", 6));
	else
		ft_check_bytes_count(count, write(fd, s, ft_strlen(s)));
}
