/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:18:31 by mel-hadd          #+#    #+#             */
/*   Updated: 2023/11/24 20:04:15 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar_fd(int c, int fd);
int	ft_putstr_fd(char *s, int fd);
int	ft_print_hex(unsigned long nb, unsigned int base, char c);
int	ft_hex_adress(unsigned long nb, unsigned int base, char c);
int ft_print_dec(int nb,int base);
int ft_print_u(unsigned int nb, int base);

#endif
