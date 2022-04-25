/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_wrap_s.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kvodorez <kvodorez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 16:46:02 by kvodorez      #+#    #+#                 */
/*   Updated: 2021/12/15 20:20:44 by kvodorez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	ft_putstr_fd_n(char *s, int fd);

int	ft_wrap_s(va_list args)
{
	char		*str;
	int			num_printed;

	str = va_arg(args, char *);
	num_printed = ft_putstr_fd_n(str, 1);
	return (num_printed);
}
