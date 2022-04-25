/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_count_digit_num.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: kvodorez <kvodorez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:00:59 by kvodorez      #+#    #+#                 */
/*   Updated: 2021/12/17 17:47:35 by kvodorez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_digit_num(unsigned int n, int base)
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
