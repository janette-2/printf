#include "libftprintf.h"
#include "libft/libft.h"
//AÑADIR EL HEADERR<<<<<-------------------
static unsigned int count_digits(unsigned long int n)
{
	unsigned long int	temp;
	unsigned long int	digits;

	digits = 0;
	temp = n;
	if (n == 0)
		digits = 1;
	else
	{
	while (temp != 0)
	{
		temp = temp / 16;
		digits++;
	}
	}
	return (digits);
}
static char *conversion_remains(unsigned long int digits, unsigned long int n, char	*hex_digits)
{
	unsigned long int	rest;
	unsigned long int	temp;
	char				*remains;

	remains = malloc(digits * sizeof(char) + 1);
	if (!remains)
		return (NULL);
	remains[digits] = '\0';
	temp = n;
	if (n == 0)
		remains[0] = '0';
	while (temp > 0)
	{
		rest = temp % 16;
		remains[digits - 1] = hex_digits[rest];
		temp = temp / 16;
		digits--;
	}
	return (remains);
}

void ft_put_pointer_fd(void *pointer, int fd, int *count)
{
	unsigned long int	n_pointer;
	unsigned long int	digits;
	char				*remains;
	char				*hex_digits;

	n_pointer = (unsigned long int) &pointer;
	hex_digits = "0123456789abcdef";
	digits = count_digits(n_pointer);
	remains = conversion_remains(digits, n_pointer, hex_digits); 
	*count += write(fd, "0x", 2);
	*count += write(fd, remains, ft_strlen(remains));
	free(remains);
}
 
/* 
int main (void)
{
	char *string;
	int	count;

	string = "";
	count = 0;
	ft_put_pointer_fd(string, 1, &count);

	return (0);
} */