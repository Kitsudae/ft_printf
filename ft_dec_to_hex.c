/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dec_to_hex.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: kvodorez <kvodorez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/03 15:24:40 by kvodorez      #+#    #+#                 */
/*   Updated: 2021/12/16 19:40:10 by kvodorez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int			ft_putstr_fd_n(char *s, int fd);
int			ft_count_digit_num(unsigned int n, int base);
char		ft_translate_hex(unsigned int i_dec, char vartype);

int	ft_dec_to_hex(unsigned int i_dec, char vartype)
{	
	int				count;

	count = 0;
	if (i_dec < 0)
	{
		ft_putchar_fd('-', 1);
		i_dec *= -1;
		count = 1;
	}
	count += ft_count_digit_num(i_dec, 16);
	if (i_dec < 16)
		ft_putchar_fd(ft_translate_hex(i_dec, vartype), 1);
	else if (i_dec >= 16)
	{
		ft_dec_to_hex(i_dec / 16, vartype);
		ft_dec_to_hex(i_dec % 16, vartype);
	}
	return (count);
}
