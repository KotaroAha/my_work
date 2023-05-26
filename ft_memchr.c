/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinami <kinami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:47:39 by kinami            #+#    #+#             */
/*   Updated: 2023/05/26 19:15:51 by kinami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *d, int c, size_t len)
{
	if (!d)
		return (NULL);
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (*(unsigned char *)(d + i) == (unsigned char) c)
			return ((void *)(d + i));
		i++;
	}
	return (NULL);
}