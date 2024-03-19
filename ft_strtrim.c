/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 06:24:08 by sojo              #+#    #+#             */
/*   Updated: 2024/03/15 10:46:06 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_calc_start(char const *s1, char const *set)
{
	int	start;

	start = 0;
	while (start < (int)ft_strlen((char *)s1))
	{
		if (!ft_strchr(set, s1[start]))
			break ;
		start++;
	}
	return (start);
}

static int	ft_calc_end(char const *s1, char const *set)
{
	int	end;

	end = ft_strlen((char *)s1) - 1;
	while (end > 0)
	{
		if (!ft_strchr(set, s1[end]))
			break ;
		end--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*res;

	if (!set)
		return (NULL);
	if (!s1)
	{
		res = malloc(1 * sizeof(char));
		if (!res)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	end = ft_calc_end(s1, set);
	start = ft_calc_start(s1, set);
	if (start > end)
	{
		res = malloc(1 * sizeof(char));
		if (!res)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	res = malloc((end - start + 1 + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, (char *)&s1[start], end - start + 1 + 1);
	return (res);
}
