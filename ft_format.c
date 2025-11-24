/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:24:26 by janrodri          #+#    #+#             */
/*   Updated: 2025/11/24 23:45:40 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_format(char type, va_list args, int *count)
{
	if (type == 'c')
		ft_putchar_fd_count(va_arg(args, int), 1, count);
	if (type == 's')
		ft_putstr_fd_count(va_arg(args, char *), 1, count);
	if (type == 'p')
		ft_put_pointer_fd(va_arg(args, void *), 1, count);
	if (type == 'd')
		ft_putnbr_fd_count(va_arg(args, int), 1, count);
	if (type == 'i')
		ft_putnbr_fd_count(va_arg(args, int), 1, count);
	if (type == 'u')
		ft_put_unsigned_nbr_fd(va_arg(args, unsigned int), 1, count);
	if (type == 'x')
		ft_put_hex_nbr_fd(va_arg(args, unsigned int), 1, count);
	if (type == 'X')
		ft_put_hex_upper_nbr_fd(va_arg(args, unsigned int), 1, count);
	if (type == '%')
		ft_put_percentage_fd(1, count);
	return ;
}

/*

PARA LA LIBRERIA:

El Makefile de tu proyecto debe compilar primero la librería utilizando su 
Makefile,y después compilar el proyecto

CONVERSIONES----------------------------------------------

• %c Imprime un solo carácter.
• %s Imprime una string (como se define por defecto en C).
• %p El puntero void * dado como argumento se imprime en formato hexadecimal.
• %d Imprime un número decimal (base 10).
• %i Imprime un entero en base 10.
• %u Imprime un número decimal (base 10) sin signo.
• %x Imprime un número hexadecimal (base 16) en minúsculas.
• %X Imprime un número hexadecimal (base 16) en mayúsculas.
• % % para imprimir el símbolo del porcentaje

*/