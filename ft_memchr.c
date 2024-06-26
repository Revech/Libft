/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahine <rchahine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:29:16 by ksayour           #+#    #+#             */
/*   Updated: 2024/06/22 17:28:06 by rchahine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int x, size_t size)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	c;

	i = 0;
	s = (unsigned char *)str;
	c = (unsigned char)x;
	while (i < size)
	{
		if (s[i] == c)
		{
			return ((void *)(s + i));
		}
		i++;
	}
	return (NULL);
}
