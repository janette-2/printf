#include "libftprintf.h"

void ft_put_percentage_fd (int fd, int *count)
{
	*count += write(fd, "%", 1);
}