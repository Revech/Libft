/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahine <rchahine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 16:37:26 by rchahine          #+#    #+#             */
/*   Updated: 2024/06/25 12:15:32 by rchahine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	count(char const *s, char c)
{
	int	i;
	int	counts;
	int	inword;

	counts = 0;
	i = 0;
	inword = 0;
	while (s[i] != '\0')
	{
		if (inword == 0 && s[i] != c)
		{
			counts ++;
			inword = 1;
		}
		else if (s[i] == c)
			inword = 0;
		i++;
	}
	return (counts);
}

void	sub(const char *s, char c, char **result, char *buffer)
{
	size_t		i;
	int			j;
	int			buff;

	j = 0;
	i = -1;
	buff = 0;
	while (++i <= ft_strlen((char *)s))
	{
		if (s[i] != c && s[i] != '\0')
			buffer[buff++] = s[i];
		else
		{
			if (buff > 0)
			{
				result[j] = malloc((buff + 1) * sizeof(char));
				buffer[buff] = '\0';
				ft_strlcpy(result[j++], buffer, buff + 1);
				buff = 0;
			}
		}
	}
	result[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	char	buffer[1000];

	str = malloc((count(s, c) + 1) * sizeof(char *));
	sub(s, c, str, buffer);
	return (str);
}
