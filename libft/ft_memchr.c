/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdone < mdone@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:31:52 by mdone             #+#    #+#             */
/*   Updated: 2023/07/08 17:41:49 by mdone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*buffer;

	i = 0;
	buffer = s;
	while (i < n)
	{
		if (buffer[i] == c)
			return ((void *)buffer + i);
		i++;
	}
	return (0);
}
