/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abollia <abollia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:04:11 by abollia           #+#    #+#             */
/*   Updated: 2024/11/29 12:37:25 by abollia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <ctype.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_printchar(int c);
int	ft_printstr(const char *str);
int	ft_printnbr(int n);
int	ft_printnbru(unsigned int n);
int	ft_printhex(unsigned long long n, const char format);
int	ft_printptr(void *p);

#endif
