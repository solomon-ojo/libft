/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 06:23:52 by sojo              #+#    #+#             */
/*   Updated: 2024/03/15 10:34:47 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*join_strings(char const *s1, char const *s2, char *res)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		res[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		res[j] = s2[i];
		i++;
		j++;
	}
	res[j] = '\0';
	return (res);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	res = malloc((ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1) * 1);
	if (res == NULL)
		return (NULL);
	res = join_strings(s1, s2, res);
	return (res);
}
