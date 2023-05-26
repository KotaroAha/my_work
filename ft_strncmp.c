/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinami <kinami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:17:13 by kinami            #+#    #+#             */
/*   Updated: 2023/05/26 18:32:53 by kinami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	while (len > 0 && *s1 && (*s1 == *s2))
	{
		len--;
		s1++;
		s2++;
	}
	if (len == 0)
		return (0);
	else
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
}