#ifndef PRINTF_H
# define PRINTF_H
# include <stdarg.h>
#include <unistd.h>

int	ft_putchar_fd(int c, int fd);
int	ft_putstr_fd(char *s, int fd);
int	ft_print_dec_hex(long nb, int base, char c);

#endif
