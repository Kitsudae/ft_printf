/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_in_the_set.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: kvodorez <kvodorez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/11 19:22:19 by kvodorez      #+#    #+#                 */
/*   Updated: 2021/12/11 19:22:25 by kvodorez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_in_the_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
