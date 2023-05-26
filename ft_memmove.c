/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinami <kinami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:35:49 by kinami            #+#    #+#             */
/*   Updated: 2023/05/25 16:34:11 by kinami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*d;
	const char	*s;

	d = dest;
	s = src;
	if(d == s)
		return (dest);
	if(d < s)
	{
		size_t	i;

		i = 0;
		while(i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while(len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	return (dest);
}