/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_bytes_count.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:24:20 by janrodri          #+#    #+#             */
/*   Updated: 2025/11/17 18:39:29 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_check_bytes_count(int *count, int written_bytes)
{
	if (written_bytes == -1)
	{
		*count = -1;
	}
	else
	{
		*count += written_bytes;
	}
}
