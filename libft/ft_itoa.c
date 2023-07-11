/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdone < mdone@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:13:37 by mdone             #+#    #+#             */
/*   Updated: 2023/07/11 13:22:33 by mdone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int num)
{
	int	i;

	if (num == 0)
		return (1);
	i = 0;
	while (num > 0 || num < 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*array;
	long	nbr;

	nbr = n;
	len = ft_numlen(nbr);
	if (n < 0)
	{
		len++;
		nbr = -nbr;
	}
	array = malloc(sizeof(char) * len + 1);
	if (!array)
		return (NULL);
	array[len] = '\0';
	while (nbr > 0)
	{
		array[--len] = nbr % 10 + 48;
		nbr /= 10;
	}
	if (n < 0)
		array[0] = '-';
	if (n == 0)
		array[0] = '0';
	return (array);
}
