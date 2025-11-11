/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:22:37 by janrodri          #+#    #+#             */
/*   Updated: 2025/11/11 19:39:14 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft/libft.h"

int	ft_printf(char const *string, ...)
{
	char	type;
	int		n_written;

	type = ft_find_percentage(string);
	if (type == 'c')

	if (type == 's')

	if (type == 'p')

	if (type == 'd')

	if (type == 'i')

	if (type == 'u')

	if (type == 'x')

	if (type == 'X')

	if (type == '%')

	return (n_written)
}

/*

PARA LA LIBRERIA:

El Makefile de tu proyecto debe compilar primero la librería utilizando su Makefile, y después
compilar el proyecto

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

