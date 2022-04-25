/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_wrap_c.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kvodorez <kvodorez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 16:45:09 by kvodorez      #+#    #+#                 */
/*   Updated: 2021/12/16 19:44:13 by kvodorez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

int	ft_wrap_c(va_list args)
{
	char		c;

	c = va_arg(args, int);
	write(1, &c, 1);
	return (1);
}
