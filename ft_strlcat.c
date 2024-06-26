/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahine <rchahine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:00:56 by ksayour           #+#    #+#             */
/*   Updated: 2024/06/22 17:26:40 by rchahine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] != '\0' && dest_len < n)
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (n <= dest_len)
		return (n + src_len);
	i = 0;
	while (src[i] != '\0' && dest_len + i < n - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (dest_len + i < n)
	{
		dest[dest_len + i] = '\0';
	}
	return (dest_len + src_len);
}
