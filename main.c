/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinami <kinami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 19:26:39 by kinami            #+#    #+#             */
/*   Updated: 2023/05/25 19:30:05 by kinami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	main(void)
{
	char *dst1 = calloc(100, sizeof(char));
	char *dst2 = calloc(100, sizeof(char));
	char *src1 = calloc(100, sizeof(char));
	char *src2 = calloc(100, sizeof(char));
	for (int i = 0; i < 99; i++)
	{
		src1[i] = i + 1;
		src2[i] = i + 1;
	}

	ft_strlcat(dst1, src1, 50);
	strlcat(dst2, src2, 50);
	printf("%s-%s", dst1, dst2);
}