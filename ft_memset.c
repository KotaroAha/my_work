/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinami <kinami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:46:25 by kinami            #+#    #+#             */
/*   Updated: 2023/06/08 19:42:55 by kinami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int val, size_t len)
{
	size_t	i;
	
/* 	if(!ptr)
		return (NULL);
 */
	i = 0;
	while(i < len)
	{
		*((unsigned char*)ptr + i) = (unsigned char)val;
		i++; 
	}
	return (ptr);
}
