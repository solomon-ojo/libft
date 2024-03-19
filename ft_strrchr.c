/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 04:32:48 by sojo              #+#    #+#             */
/*   Updated: 2024/03/15 04:47:50 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*var;
	char	*str;

	str = (char *)s;
	var = NULL;
	while (*str)
	{
		if (*str == (char)c)
			var = str;
		str++;
	}
	if (*str == (char)c)
		var = str;
	return (var);
}
