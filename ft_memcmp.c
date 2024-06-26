/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahine <rchahine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:04:27 by ksayour           #+#    #+#             */
/*   Updated: 2024/06/22 17:28:01 by rchahine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n && ((const unsigned char *)str1)[i]
			== ((const unsigned char *)str2)[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return ((int)((const unsigned char *)str1)[i]
			- (int)((const unsigned char *)str2)[i]);
}
