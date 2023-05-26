/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinami <kinami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:04:35 by kinami            #+#    #+#             */
/*   Updated: 2023/05/26 13:51:53 by kinami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t    ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	src_len = 0;
	dest_len = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	while(dest[dest_len])
		dest_len++;
	if (size <= dest_len)
		return(src_len + size);
	i = 0;
	size--;
	while(size && size - dest_len && src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
		size--;
	}
	dest[i + dest_len] = '\0';
	return (dest_len + src_len);
}
