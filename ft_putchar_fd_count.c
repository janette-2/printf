/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_count.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:23:42 by janrodri          #+#    #+#             */
/*   Updated: 2025/11/17 18:42:06 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putchar_fd_count(char c, int fd, int *count)
{
	ft_check_bytes_count(count, write (fd, &c, 1));
}
