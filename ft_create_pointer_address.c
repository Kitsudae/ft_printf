/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_create_pointer_address.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kvodorez <kvodorez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/03 18:31:59 by kvodorez      #+#    #+#                 */
/*   Updated: 2021/12/17 19:10:30 by kvodorez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <unistd.h>
#include <stdio.h>

int	ft_uintptr_to_hex(unsigned long i_ptr);

int	ft_create_pointer_address(unsigned long addr_ptr)
{
	int	count;

	count = 2;
	write(1, "0x", 2);
	count += ft_uintptr_to_hex(addr_ptr);
	return (count);
}
