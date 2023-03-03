/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykenzaou <ykenzaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:09:44 by ykenzaou          #+#    #+#             */
/*   Updated: 2023/02/19 18:09:47 by ykenzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putform(va_list arg, char a)
{
	int	n;

	n = 0;
	if (a == 'c')
		n += ft_putchar(va_arg(arg, int));
	else if (a == 's')
		n += ft_putstr(va_arg(arg, char *));
	else if (a == 'd' || a == 'i')
		n += ft_putnbr_id(va_arg(arg, int));
	else if (a == 'x' || a == 'X')
		n += ft_putnbr_hex(va_arg(arg, unsigned int), a);
	else if (a == 'u')
		n += ft_putnbr_uns(va_arg(arg, unsigned int));
	else if (a == 'p')
	{
		n += write(1, "0x", 2);
		n += ft_putpontr(va_arg(arg, unsigned long long));
	}
	else if (a == '%')
		n += ft_putchar('%');
	return (n);
}

int	ft_printf(const char *printstr, ...)
{
	va_list	arg;
	int		i;
	int		n;

	i = 0;
	n = 0;
	va_start(arg, printstr);
	if (write(1, 0, 0) == -1)
		return (-1);
	while (printstr[i])
	{
		if (printstr[i] == '%')
		{
			i++;
			n += ft_putform(arg, printstr[i]);
		}
		else
			n += ft_putchar(printstr[i]);
		i++;
	}
	va_end(arg);
	return (n);
}
