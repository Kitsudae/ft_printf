/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kvodorez <kvodorez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/23 15:43:33 by kvodorez      #+#    #+#                 */
/*   Updated: 2021/12/16 19:34:52 by kvodorez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

int	ft_putstr_fd_n(char *s, int fd);
int	ft_check_type(const char *fmt, va_list args, int num_printed);

int	ft_printf(const char *fmt, ...)
{
	va_list			args;
	int				len_s;
	int				num_printed;

	va_start(args, fmt);
	len_s = 0;
	num_printed = 0;
	while (*fmt)
	{
		len_s = 0;
		while (fmt[len_s] != '%' && fmt[len_s])
			len_s++;
		num_printed += write(1, fmt, len_s);
		fmt += len_s;
		if (*fmt == '%' && *(fmt + 1) != 0)
		{
			num_printed = ft_check_type(fmt, args, num_printed);
			fmt += 2;
		}
		else if (*fmt != 0)
			fmt += 1;
	}
	va_end(args);
	return (num_printed);
}
