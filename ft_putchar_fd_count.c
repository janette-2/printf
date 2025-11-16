#include "libftprintf.h"

void	ft_putchar_fd_count(char c, int fd, int *count)
{
	ft_check_bytes_count(count, write (fd, &c, 1));
}