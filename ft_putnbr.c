/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:19:34 by mel-hadd          #+#    #+#             */
/*   Updated: 2023/11/25 21:23:58 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb, int base)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
		return (write(1, "-2147483648", 11));
	if (nb > 9)
		count += ft_putnbr((nb / base), base);
	if (nb < 0)
	{
		nb *= -1;
		count += ft_putchar_fd('-', 1);
		count += ft_putnbr(nb, base);
	}
	else
		count += ft_putchar_fd(nb % base + '0', 1);
	return (count);
}
