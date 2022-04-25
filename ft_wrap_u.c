/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_wrap_u.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kvodorez <kvodorez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 16:48:36 by kvodorez      #+#    #+#                 */
/*   Updated: 2021/12/15 20:21:21 by kvodorez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	ft_put_unsigned_int_fd(unsigned int n, int fd);

int	ft_wrap_u(va_list args)
{
	int			d;
	int			num_printed;

	d = va_arg(args, int);
	num_printed = ft_put_unsigned_int_fd(d, 1);
	return (num_printed);
}
