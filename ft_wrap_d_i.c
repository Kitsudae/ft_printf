/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_wrap_d_i.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: kvodorez <kvodorez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 16:47:26 by kvodorez      #+#    #+#                 */
/*   Updated: 2021/12/15 20:18:53 by kvodorez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	ft_putnbr_fd_n(int n, int fd);

int	ft_wrap_d_i(va_list args)
{
	int			d;
	int			num_printed;

	d = va_arg(args, int);
	num_printed = ft_putnbr_fd_n(d, 1);
	return (num_printed);
}
