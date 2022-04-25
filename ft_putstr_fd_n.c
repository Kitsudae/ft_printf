/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd_n.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: kvodorez <kvodorez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:09:34 by kvodorez      #+#    #+#                 */
/*   Updated: 2021/12/17 17:52:00 by kvodorez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include "ft_printf.h"

int	ft_putstr_fd_n(char *s, int fd)
{
	int	len_s;

	if (!s || !fd)
		return (write(1, "(null)", 6));
	len_s = ft_strlen(s);
	return (write(fd, s, len_s));
}
