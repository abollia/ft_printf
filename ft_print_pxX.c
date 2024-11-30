/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pxX.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abollia <abollia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:09:57 by abollia           #+#    #+#             */
/*   Updated: 2024/11/29 10:03:18 by abollia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned long long n, const char format)
{
	int		len;
	char	*base;

	len = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else if (format == 'X')
		base = "0123456789ABCDEF";
	if (n >= 16)
	{
		len += ft_printhex(n / 16, format);
		len += ft_printhex(n % 16, format);
	}
	else
		len += ft_printchar(base[n]);
	return (len);
}

int	ft_printptr(void *p)
{
	int	len;

	len = 0;
	if (!p)
		return (ft_printstr("(nil)"));
	len += ft_printstr("0x");
	len += ft_printhex((unsigned long long)p, 'x');
	return (len);
}
