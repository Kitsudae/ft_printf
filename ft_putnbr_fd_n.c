/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd_n.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: kvodorez <kvodorez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/08 20:03:53 by kvodorez      #+#    #+#                 */
/*   Updated: 2021/12/17 17:40:39 by kvodorez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	ft_putnbr_fd_n(int n, int fd)
{
	long		nn;
	int			num_count;

	nn = (long)n;
	num_count = 0;
	if (nn < 0)
	{
		ft_putchar_fd('-', fd);
		num_count = 1;
		nn *= -1;
	}
	num_count += ft_count_digit_num(nn, 10);
	if (nn < 10)
		ft_putchar_fd(nn % 10 + '0', fd);
	else if (nn >= 10)
	{
		ft_putnbr_fd_n(nn / 10, fd);
		ft_putnbr_fd_n(nn % 10, fd);
	}
	return (num_count);
}
