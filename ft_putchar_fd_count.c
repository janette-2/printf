#include "libftprintf.h"

void	ft_putchar_fd_count(char c, int fd, int *count)
{
	*count += write (fd, &c, 1);
}