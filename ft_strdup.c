/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahine <rchahine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 19:24:26 by ksayour           #+#    #+#             */
/*   Updated: 2024/06/22 17:27:36 by rchahine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t		n;
	size_t		i;
	char		*res;

	n = 0;
	while (src[n])
		n++;
	res = (char *)malloc(sizeof(char) * (n + 1));
	if (!res)
		return (NULL);
	i = -1;
	while (i++, i < n)
		res[i] = src[i];
	res[i] = '\0';
	return (res);
}
