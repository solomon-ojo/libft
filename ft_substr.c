/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 06:23:02 by sojo              #+#    #+#             */
/*   Updated: 2024/03/15 10:46:42 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	j;
	char			*result;

	j = 0;
	if (!s || start >= ft_strlen((char *)s))
	{
		result = malloc(sizeof(char) * 1);
		if (!result)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (j < len)
	{
		result[j] = s[start];
		start++;
		j++;
	}
	result[j] = '\0';
	return (result);
}
