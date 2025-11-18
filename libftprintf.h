/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:13:51 by janrodri          #+#    #+#             */
/*   Updated: 2025/11/18 20:03:46 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

//int	ft_printf(char const *format, ...)
int		ft_find_percentage(char const *string);
void	ft_putchar_fd_count(char c, int fd, int *count);
void	ft_putstr_fd_count(char *s, int fd, int *count);
void	ft_putnbr_fd_count(int n, int fd, int *count);
void	ft_put_unsigned_nbr_fd( unsigned int n, int fd, int *count);
void	ft_put_hex_nbr_fd( unsigned int n, int fd, int *count);
void	ft_put_hex_upper_nbr_fd(unsigned int n, int fd, int *count);
void	ft_put_percentage_fd(int fd, int *count);
void	ft_put_pointer_fd(void *pointer, int fd, int *count);
void	ft_format(char type, va_list args, int *count);
void	ft_check_bytes_count(int *count, int written_bytes);

#endif

/* TO COMPILE THE FILES WITH THE libft USE THIS AFTER 'make':

 cc -Wall -Werror -Wextra ft_printf.c ft_format.c ft_putchar_fd_count.c 
ft_putstr_fd_count.c ft_put_pointer_fd.c ft_put_nbr_fd_count.c 
ft_put_unsigned_nbr_fd.c ft_put_hex_nbr_fd.c ft_put_HEX_nbr_fd.c 
ft_put_percentage_fd.c ft_check_bytes_count.c -Llibft -lft && ./a.out

*/