/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:18:13 by mel-hadd          #+#    #+#             */
/*   Updated: 2023/11/24 18:53:22 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int	ft_print_hex(unsigned long nb, unsigned int base, char c)
{
	char	*base_hex;
	int		count;

	count = 0;
	if (c == 'x')
		base_hex = "0123456789abcdef";
	else if (c == 'X')
		base_hex = "0123456789ABCDEF";
	if (nb < base)
		count += ft_putchar_fd(base_hex[nb], 1);
	else
	{
		count += ft_print_hex(nb / base, base, c);
		count += ft_putchar_fd((base_hex[nb % base]), 1);
	}
	return (count);
}
