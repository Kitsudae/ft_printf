/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_wrap_x.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kvodorez <kvodorez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 16:49:53 by kvodorez      #+#    #+#                 */
/*   Updated: 2021/12/15 20:10:56 by kvodorez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	ft_dec_to_hex(int i_dec, char vartype);

int	ft_wrap_x(va_list args, char vartype)
{
	unsigned int			d;
	int						num_printed;

	d = va_arg(args, unsigned int);
	num_printed = ft_dec_to_hex(d, vartype);
	return (num_printed);
}
