/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_put_unsigned_int_fd.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kvodorez <kvodorez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/03 17:42:56 by kvodorez      #+#    #+#                 */
/*   Updated: 2021/12/16 19:41:58 by kvodorez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsigned_int_fd(unsigned int n, int fd)
{
	int	count;

	count = ft_count_digit_num(n, 10);
	if (n < 10)
		ft_putchar_fd(n % 10 + '0', fd);
	else if (n >= 10)
	{
		ft_put_unsigned_int_fd(n / 10, fd);
		ft_put_unsigned_int_fd(n % 10, fd);
	}
	return (count);
}
