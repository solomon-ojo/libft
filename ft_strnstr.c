/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 04:49:56 by sojo              #+#    #+#             */
/*   Updated: 2024/03/15 10:42:42 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!str && !len)
		return (0);
	if (find[0] == '\0' || find == str)
		return ((char *)str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == find[j] && (i + j) < len)
		{
			if (str[i + j] == '\0' && find[j] == '\0')
				return ((char *)&str[i]);
			j++;
		}
		if (find[j] == '\0')
			return ((char *)(str + i));
		i++;
	}
	return (0);
}
