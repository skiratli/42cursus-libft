/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skiratli <skiratli@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:04:21 by skiratli          #+#    #+#             */
/*   Updated: 2022/11/21 19:18:31 by skiratli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	k;

	j = 0;
	k = 0;
	if (!dst && !dstsize)
		return (0);
	while (dst[j] && j < dstsize)
		j++;
	while ((src[k]) && ((j + k + 1) < dstsize))
	{
		dst[j + k] = src[k];
		k++;
	}
	if (j != dstsize)
		dst[j + k] = '\0';
	return (j + ft_strlen(src));
}
