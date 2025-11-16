#include "libftprintf.h"

void ft_put_percentage_fd (int fd, int *count)
{
	ft_check_bytes_count(count, write(fd, "%", 1));
}