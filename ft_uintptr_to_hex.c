/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_uintptr_to_hex.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: kvodorez <kvodorez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/03 18:51:44 by kvodorez      #+#    #+#                 */
/*   Updated: 2021/12/16 19:43:46 by kvodorez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_printf.h"

int	ft_uintptr_to_hex(unsigned long i_ptr)
{	
	char			*allhexvalues_down;
	char			hex_val;
	int				count;

	allhexvalues_down = "0123456789abcdef";
	count = 0;
	count = ft_count_digit_num_long(i_ptr, 16);
	if (i_ptr < 16)
	{
		hex_val = allhexvalues_down[i_ptr];
		ft_putchar_fd(hex_val, 1);
	}
	else if (i_ptr >= 16)
	{
		ft_uintptr_to_hex(i_ptr / 16);
		ft_uintptr_to_hex(i_ptr % 16);
	}
	return (count);
}
