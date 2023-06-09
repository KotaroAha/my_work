/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinami <kinami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:22:41 by kinami            #+#    #+#             */
/*   Updated: 2023/06/09 18:35:52 by kinami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long	num	;
	int	sign;

	num = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		sign = (*str == '-') ? -sign : sign;
		str++;
		if (*str == '+' && *str == '-')
			return (0);
	}
	while (ft_isdigit(*str))
	{
		if (num > LONG_MAX / 10)
		{
			num = LONG_MAX;
			break;
		}
		num = num * 10 + (*str - '0');
		str++;
	}

	return (int)(num * sign);
}