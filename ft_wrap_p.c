/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_wrap_p.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kvodorez <kvodorez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 16:50:46 by kvodorez      #+#    #+#                 */
/*   Updated: 2021/12/15 20:19:58 by kvodorez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdint.h>

int	ft_create_pointer_address(unsigned long addr_ptr);

int	ft_wrap_p(va_list args)
{
	unsigned long	p;
	int				num_printed;

	p = va_arg(args, unsigned long);
	num_printed = ft_create_pointer_address(p);
	return (num_printed);
}
