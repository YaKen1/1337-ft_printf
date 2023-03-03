/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykenzaou <ykenzaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:24:22 by ykenzaou          #+#    #+#             */
/*   Updated: 2023/02/22 22:24:34 by ykenzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpontr(unsigned long long nbr)
{
	int		n;
	char	*base;

	base = "0123456789abcdef";
	n = 0;
	if (nbr >= 0 && nbr < 16)
		n += ft_putchar(base[nbr % 16]);
	else
	{
		n += ft_putpontr(nbr / 16);
		n += ft_putchar(base[nbr % 16]);
	}
	return (n);
}
