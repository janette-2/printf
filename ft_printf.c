/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:22:37 by janrodri          #+#    #+#             */
/*   Updated: 2025/11/19 18:58:30 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft/libft.h"

static int	write_and_count(char const *format, va_list args, int *count)
{
	char	type;
	int		written_bytes;
	int		i;

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			type = format[i + 1];
			ft_format(type, args, count);
			i = i + 2;
		}
		else
		{
			written_bytes = write(1, &format[i], 1);
			ft_check_bytes_count(count, written_bytes);
			i++;
		}
	}
	return (*count);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = 0;
	count = write_and_count(format, args, &count);
	va_end(args);
	return (count);
}
/* 
#include <stdio.h>
#include <limits.h>
int main(void)
{
	char *string;
	int  i_num;
	int n_print;
	int n_print1;

	i_num = 28;
	string = "123456";

	ft_printf("\nFT_PRINTF: \n\n");
	
	n_print = ft_printf("--TESTS--:\n");
	ft_printf("Printed Bytes :%d\n", n_print);
	ft_printf("string: %s\n", string);
	ft_printf("pointer: %p\n", string);
	ft_printf("hex: %x\n", 15);
	ft_printf("HEX: %X\n", 15);
	ft_printf("char: %c\n", 'j');
	ft_printf("int: %i\n", i_num);
	ft_printf("dig: %d\n", i_num);
	ft_printf("unsigned: %u\n", -1);
	ft_printf("percentage: %%\n");

	ft_printf("\nCOMPARISON PRINTF ORIGINAL: \n\n");

	n_print1 = printf("--TESTS--:\n");
	printf("Printed Bytes :%d\n", n_print1);
	printf("string: %s\n", string);
	printf("pointer: %p\n", string);
	printf("hex: %x\n", 15);
	printf("HEX: %X\n", 15);
	printf("char: %c\n", 'j');
	printf("int: %i\n", i_num);
	printf("dig: %d\n", i_num);
	printf("unsigned: %u\n", -1);
	printf("percentage: %%\n");

	ft_printf("\nADDITIONAL TEST: \n\n");
    int ret1, ret2;

	//Caso básico
    ft_printf("\nCaso básico:\n");
    ret1 = ft_printf("ft: Hola mundo\n");
    ret2 = printf("or: Hola mundo\n");
    ft_printf("ft_printf:%d printf:%d\n", ret1, ret2);

	// Caso multiformato
	ft_printf("\nCaso multiformato:\n");
    ret1 = ft_printf("ft: %d %s %p %x %X %i %d %u %%\n",
	1, "abc", &string, 856, 856, 25, 26, 27);
    ret2 = printf("or: %d %s %p %x %X %i %d %u %%\n",
	1, "abc", &string, 856, 856, 25, 26, 27);
    ft_printf("ft_printf:%d printf:%d\n", ret1, ret2);

    // Caso valores límite
	ft_printf("\nCaso valores límite:\n");
    ret1 = ft_printf("ft: %d %d\n", INT_MAX, INT_MIN);
    ret2 = printf("or: %d %d\n", INT_MAX, INT_MIN);
    ft_printf("ft_printf:%d printf:%d\n", ret1, ret2);

    // Caso puntero NULL
	ft_printf("\nCaso puntero NULL:\n");
    ret1 = ft_printf("ft: %p\n", NULL);
    ret2 = printf("or: %p\n", NULL);
    ft_printf("ft_printf:%d printf:%d\n", ret1, ret2);

	// Caso error (-1)
    close(1);
    ret1 = ft_printf("cerrado\n");
    ret2 = printf("cerrado\n");
	fprintf(stderr,"\nCaso error:\n");
   	fprintf(stderr, "ft_printf:%d printf:%d\n", ret1, ret2); 
   //fprintf == printf but in specified 'fd', in this case, in stderr(2).
	
    return 0;
} */
