/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:22:37 by janrodri          #+#    #+#             */
/*   Updated: 2025/11/15 22:55:57 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft/libft.h"

int	ft_printf(char const *format, ...)
{
	char	type;
	va_list	args;
	int		count;
	int		i;

	va_start(args, format);
	count = 0;
	i = 0;
	while(format[i] != '\0')
	{
		if (format[i] == '%')
		{
		type = format[i + 1]; //ft_find_percentage(format);
		ft_format(type, args, &count);
		i++;
		//format = ft_memchr(format, '%' , ft_strlen(format)) + 1 ; //Avanza para buscar desde el siguiente char del % encontrado hasta llegar al final 	
		}
		else
			count += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
// FALTA ABORDAR EL CASO DE CUANDO TE DA -1 LOS CHARS SACADOS??
int main(void)
{
	char *string;
	int  i_num;
	int n_print;

	i_num = 28;
	string = "123456";
	n_print = ft_printf("Empezamos con las pruebas:\n"); //27 chars en la string
	ft_printf("Printed Bytes :%d\n", n_print);
	ft_printf("string: %s\n", string);
	ft_printf("pointer: %p\n", string);
	ft_printf("hex: %x\n", string);
	ft_printf("HEX: %X\n", string);
	ft_printf("char: %c\n", 'j');
	ft_printf("int: %i\n", i_num);
	ft_printf("dig: %d\n", i_num);
	ft_printf("unsigned: %u\n", -1);
	ft_printf("percentage: %%\n");
	return (0);
}

