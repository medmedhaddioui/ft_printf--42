/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:54:43 by mel-hadd          #+#    #+#             */
/*   Updated: 2023/11/25 14:41:16 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(unsigned int nb, int base)
{
	int	count;

	count = 0;
	if (nb > 9)
	{
		count += ft_print_u((nb / base), base);
		count += ft_putchar_fd(nb % base + '0', 1);
	}
	else
		count += ft_putchar_fd(nb % base + '0', 1);
	return (count);
}
