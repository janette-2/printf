/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_bytes_count.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:24:20 by janrodri          #+#    #+#             */
/*   Updated: 2025/11/25 19:29:16 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
