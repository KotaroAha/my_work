/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinami <kinami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 19:19:05 by kinami            #+#    #+#             */
/*   Updated: 2023/05/26 19:40:14 by kinami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (*(unsigned char*)(b1 + i) != *(unsigned char *)(b2 + i))
			return (*(unsigned char *)(b1 + i) - *(unsigned char *)(b2 + i));
		i++;
	}
	return (0);
}