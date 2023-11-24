/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:18:26 by mel-hadd          #+#    #+#             */
/*   Updated: 2023/11/24 14:19:26 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	count;

	count = 0;
	if (!s)
		return (ft_putstr_fd("(null)", 1));
	while (*s)
	{
		write(fd, s, 1);
		s++;
		count++;
	}
	return (count);
}
