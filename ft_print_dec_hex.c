#include "printf.h"

int	ft_print_dec_hex(long nb, int base, char c)
{
	char *base_hex;
	char *base_dec;
	if (c == 'x')
	base_hex = "0123456789abcdef";
	if (c == 'X')
	 base_hex  = "0123456789ABCDEF";
	if (c == 'd')
	base_dec = "0123456789";
	if (nb < 0)
	{
		ft_putchar_fd(('-'),1);
        nb *= -1;
	}
	if (nb < base)
		return ft_putchar_fd(base_hex[nb], 1);
	else
	{
		ft_print_dec_hex(nb / base, base, c);
		return ft_putchar_fd((base_hex[nb % base]),1);
	}
}
 