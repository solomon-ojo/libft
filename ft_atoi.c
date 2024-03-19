/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 06:06:57 by sojo              #+#    #+#             */
/*   Updated: 2024/03/16 08:06:52 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	result;
	int		i;
	int		negative;

	i = 0;
	result = 0;
	negative = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return ((int)result * negative);
}
