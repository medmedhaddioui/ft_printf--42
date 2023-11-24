/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dec_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:18:13 by mel-hadd          #+#    #+#             */
/*   Updated: 2023/11/24 14:56:06 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_print_dec(int nb,int base)
{
	int count;
	count = 0;
	if (nb == -2147483648)
	{
		return write(1 , "-2147483648", 11);
	}
	if (nb > 9)
		count += ft_print_dec((nb / base), base);
	if (nb < 0)
	{
		nb *= -1;
		count += ft_putchar_fd('-', 1);
		count += ft_print_dec(nb, base);
	}
	else
		count += ft_putchar_fd(nb % base + '0', 1);
	return (count);
}
int	ft_print_dec_hex(unsigned long nb, unsigned int base, char c)
{
	char	*base_hex;
	int		count;

	count = 0;
	if (c == 'x')
		base_hex = "0123456789abcdef";
	if (c == 'X')
		base_hex = "0123456789ABCDEF";
	if (c == 'd')
		count += ft_print_dec(nb, base);
	if (nb < base)
		count += ft_putchar_fd(base_hex[nb], 1);
	else
	{
		count += ft_print_dec_hex(nb / base, base, c);
		count += ft_putchar_fd((base_hex[nb % base]), 1);
	}
	return (count);
}
