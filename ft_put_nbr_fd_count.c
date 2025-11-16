#include "libftprintf.h"
#include "libft/libft.h"

void	ft_putnbr_fd_count(int n, int fd, int *count)
{
	char	c;
	//int		written_bytes;

	if (n == -2147483648)
		ft_check_bytes_count(count, write(fd, "-2147483648", 11));
	else
	{
		if (n < 0)
		{
			ft_check_bytes_count(count, write(fd, "-", 1));
			n = -n;
		}
		if (n >= 10)
			ft_putnbr_fd_count(n / 10, fd, count);
		c = n % 10 + '0';
		ft_check_bytes_count(count, write(fd, &c, 1));
	}
}  
