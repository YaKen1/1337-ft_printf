/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_id.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykenzaou <ykenzaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:10:41 by ykenzaou          #+#    #+#             */
/*   Updated: 2023/02/22 20:10:43 by ykenzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_id(int n)
{
	int	rn;

	rn = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		rn += ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		rn += ft_putnbr_id(n / 10);
	rn += ft_putchar(n % 10 + '0');
	return (rn);
}
