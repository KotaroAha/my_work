/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinami <kinami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:11:52 by kinami            #+#    #+#             */
/*   Updated: 2023/05/25 15:32:31 by kinami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char	*d = dest;
	const char	*s = src;
	size_t	i;

	i = 0;
	while(i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}