/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykenzaou <ykenzaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:25:00 by ykenzaou          #+#    #+#             */
/*   Updated: 2023/02/22 22:25:03 by ykenzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_uns(unsigned int nbr)
{
	int	rn;

	rn = 0;
	if (nbr >= 10)
		rn += ft_putnbr_uns(nbr / 10);
	rn += ft_putchar(nbr % 10 + '0');
	return (rn);
}
