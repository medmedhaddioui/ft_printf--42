#include "printf.h"
int	ft_putstr_fd(char *s, int fd)
{
	int count;
	count = 0;
	while (*s)
	{
		write(fd, s, 1);
		s++;
		count++;
	}
	return count;
}