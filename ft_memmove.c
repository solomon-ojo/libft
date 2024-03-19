/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 17:41:12 by sojo              #+#    #+#             */
/*   Updated: 2024/03/10 07:52:29 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst < src)
		i = -1;
	else
		i = n ;
	if (dst != src && n)
	{
		if (dst > src)
			while (i--)
				((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		else
			while (++i < n)
				((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	}
	return (dst);
}
