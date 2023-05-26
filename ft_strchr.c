/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinami <kinami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:34:41 by kinami            #+#    #+#             */
/*   Updated: 2023/05/26 17:30:13 by kinami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (char*)(s + i);
		i++;
	}
	if (s[i] == (char)c)
		return (char*)(s + i);
	return (NULL);
}