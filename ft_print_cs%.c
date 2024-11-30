/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abollia <abollia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 09:32:55 by abollia           #+#    #+#             */
/*   Updated: 2024/11/28 11:04:32 by abollia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printstr(const char *str)
{
	size_t	i;

	if (!str)
		str = "(null)";
	i = 0;
	while (str[i])
		i += ft_printchar(str[i]);
	return (i);
}
