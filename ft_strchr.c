/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 04:14:28 by sojo              #+#    #+#             */
/*   Updated: 2024/03/15 10:32:48 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str && *str != (char)c)
		str++;
	if (*str == (char)c)
		return (str);
	return (NULL);
}
