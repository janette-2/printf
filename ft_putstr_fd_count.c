#include "libftprintf.h"
#include "libft/libft.h"

void	ft_putstr_fd_count(char *s, int fd, int *count)
{
	count += write(fd, s, ft_strlen(s));
}
