/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykenzaou <ykenzaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:30:53 by ykenzaou          #+#    #+#             */
/*   Updated: 2023/02/22 21:31:03 by ykenzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

size_t	ft_strlen(char *str);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr_id(int n);
int		ft_putnbr_hex(unsigned int nbr, char ch);
int		ft_putnbr_uns(unsigned int nbr);
int		ft_putpontr(unsigned long long nbr);
int		ft_printf(const char *printstr, ...);

#endif
