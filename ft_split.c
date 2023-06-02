/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinami <kinami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:39:09 by kinami            #+#    #+#             */
/*   Updated: 2023/06/02 15:56:25 by kinami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_allocate(char **tab, const char *s, char sep)
{
	char	**tab_p;
	const char	*tmp;

	tmp = s;
	tab_p = tab;
	while (*tmp)
	{
		while (*s == sep)
			++s;
			tmp = s;
		while (*tmp && *tmp != sep)
			++tmp;
		if (*tmp == sep || tmp > s)
		{
			*tab_p = ft_substr(s, 0, tmp - s);
			s = tmp;
			++tab_p;
		}
	}
	*tab_p = NULL;
}

static int	ft_count_words(const char *s, char sep)
{
	int	word_count;

	word_count = 0;
	while (*s)
	{
		while (*s ==sep)
			++s;
		if (*s)
			++word_count;
		while (*s && *s != sep)
			++s;
	}
	return (word_count);
}

char	**ft_split(const char *s, char c)
{
	char	**new;
	int	size;

	if (!s)
		return (NULL);
	size = ft_count_words(s, c);
	new = (char **)malloc((size + 1) * sizeof(char *));
	if (!new)
		return (NULL);
	ft_allocate(new, s, c);
	return (new);
}