/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skiratli <skiratli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:52:56 by skiratli          #+#    #+#             */
/*   Updated: 2022/11/25 03:35:14 by skiratli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	char		*s;

	d = (char *)dst;
	s = (char *)src;
	if (s < d)
	{
		while (len--)
			d[len] = s[len];
	}
	else
	{
		ft_memcpy(d, s, len);
	}
	return (dst);
}
