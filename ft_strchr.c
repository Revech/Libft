/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahine <rchahine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 08:26:08 by ksayour           #+#    #+#             */
/*   Updated: 2024/06/22 17:27:41 by rchahine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int x)
{
	int		i;
	char	c;

	i = 0;
	c = (char)x;
	while (str[i] != c && str[i] != '\0')
		i++;
	if (str[i] == c)
		return ((char *)&str[i]);
	return (NULL);
}
