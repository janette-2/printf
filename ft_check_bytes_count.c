#include "libftprintf.h"

void ft_check_bytes_count(int *count, int written_bytes)
{
	if (written_bytes == -1)
	{
		*count = -1;
	}
	else
	{
		*count += written_bytes;
	}
}
