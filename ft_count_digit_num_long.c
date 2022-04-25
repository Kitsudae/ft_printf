/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_count_digit_num_long.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: kvodorez <kvodorez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/15 20:58:23 by kvodorez      #+#    #+#                 */
/*   Updated: 2021/12/17 17:48:32 by kvodorez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_digit_num_long(unsigned long n, int base)
{
	int		count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / base;
		count++;
	}
	return (count);
}
