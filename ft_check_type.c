/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_check_type.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: kvodorez <kvodorez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/16 17:22:18 by kvodorez      #+#    #+#                 */
/*   Updated: 2021/12/16 17:24:21 by kvodorez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	ft_conversion(char vartype, va_list args, int num_printed);

int	ft_check_type(const char *fmt, va_list args, int num_printed)
{
	char			vartype;

	vartype = *(fmt + 1);
	num_printed = ft_conversion(vartype, args, num_printed);
	return (num_printed);
}
