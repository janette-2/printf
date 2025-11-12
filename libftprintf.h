/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:13:51 by janrodri          #+#    #+#             */
/*   Updated: 2025/11/12 18:34:47 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(char const *string, ...);
int		ft_find_percentage(char const *string);

#endif 


/* TO COMPILE THE FILES WITH THE libft USE THIS:

cc -Wall -Werror -Wextra ft_find_percentage.c -Llibft -lft && ./a.out
*/