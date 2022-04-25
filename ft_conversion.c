/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_conversion.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: kvodorez <kvodorez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/03 15:24:19 by kvodorez      #+#    #+#                 */
/*   Updated: 2021/12/16 19:37:40 by kvodorez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stdio.h>
#include "ft_printf.h"

int	ft_is_in_the_set(char c, char const *set);
int	ft_wrap_c(va_list args);
int	ft_wrap_s(va_list args);
int	ft_wrap_d_i(va_list args);
int	ft_wrap_u(va_list args);
int	ft_wrap_x(va_list args, char vartype);
int	ft_wrap_p(va_list args);

int	ft_conversion(char vartype, va_list args, int num_printed)
{
	char		*specifiers;

	specifiers = "csdiuxXp%";
	if (!(ft_is_in_the_set(vartype, specifiers)))
		return (-1);
	if (vartype == 'c')
	{
		num_printed += ft_wrap_c(args);
	}
	else if (vartype == 's')
		num_printed += ft_wrap_s(args);
	else if (vartype == 'd' || vartype == 'i')
		num_printed += ft_wrap_d_i(args);
	else if (vartype == 'u')
		num_printed += ft_wrap_u(args);
	else if (vartype == 'x' || vartype == 'X')
		num_printed += ft_wrap_x(args, vartype);
	else if (vartype == 'p')
		num_printed += ft_wrap_p(args);
	else if (vartype == '%')
	{
		ft_putchar_fd('%', 1);
		num_printed += 1;
	}
	return (num_printed);
}
