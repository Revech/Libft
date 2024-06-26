/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahine <rchahine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 17:09:07 by rchahine          #+#    #+#             */
/*   Updated: 2024/06/25 14:23:57 by rchahine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	count2(int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len ++;
		n /= 10;
	}
	return (len);
}

char	*convert(char *c, long num)
{
	int			i;

	i = count2(num);
	if (num < 0)
	{
		i ++;
		num *= -1;
	}
	c[i] = '\0';
	i--;
	while (num != 0)
	{
		c[i] = num % 10 + '0';
		num = num / 10;
		i--;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	long		num;
	char		*c;
	int			i;

	num = n;
	i = count2(num);
	if (n < 0)
		i ++;
	c = (char *)malloc((i + 1) * sizeof(char));
	if (!c)
		return (NULL);
	if (n == 0)
	{
		c = (char *)malloc(2 * sizeof(char));
		if (!c)
			return (NULL);
		c[0] = '0';
		c[1] = '\0';
		return (c);
	}
	if (n < 0)
		c[0] = '-';
	return (c = convert(c, num));
}
