/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_translate_hex.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: kvodorez <kvodorez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:59:44 by kvodorez      #+#    #+#                 */
/*   Updated: 2021/12/15 20:13:20 by kvodorez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	ft_translate_hex(unsigned int i_dec, char vartype)
{
	char			*allhexvalues_up;
	char			*allhexvalues_down;
	char			hex_val;

	hex_val = 0;
	allhexvalues_up = "0123456789ABCDEF";
	allhexvalues_down = "0123456789abcdef";
	if (vartype == 'x')
		hex_val = allhexvalues_down[i_dec];
	else if (vartype == 'X')
		hex_val = allhexvalues_up[i_dec];
	return (hex_val);
}
