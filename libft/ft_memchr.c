/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdone < mdone@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:31:52 by mdone             #+#    #+#             */
/*   Updated: 2023/07/15 01:13:39 by mdone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	int				i;
	unsigned char	*s;

	s = (unsigned char *)ptr;
	i = 0;
	while (n > 0)
	{
		if (s[i] == (unsigned char)c)
			return (&s[i]);
		i++;
		n--;
	}
	return ((void *) NULL);
}
/*
int main()
{
    int arr[] = {10,20,30,40,50};
    int src = 30;
    void *rsl = ft_memchr(arr,src,sizeof(arr));
    printf("%d",*(int *)rsl);
}
*/
