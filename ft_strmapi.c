/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahine <rchahine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 19:47:20 by rchahine          #+#    #+#             */
/*   Updated: 2024/06/25 11:18:38 by rchahine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*c;
	int		i;

	i = 0;
	c = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (s == NULL || f == NULL)
		return (NULL);
	if (!c)
		return (NULL);
	while (s[i] != '\0')
	{
		c[i] = f(i, s[i]);
		i ++;
	}
	c[i] = '\0';
	return (c);
}
