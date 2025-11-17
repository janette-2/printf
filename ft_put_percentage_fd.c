/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_percentage_fd.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:25:09 by janrodri          #+#    #+#             */
/*   Updated: 2025/11/17 18:37:46 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_put_percentage_fd(int fd, int *count)
{
	ft_check_bytes_count(count, write(fd, "%", 1));
}
