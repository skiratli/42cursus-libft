/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skiratli <skiratli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 02:05:53 by skiratli          #+#    #+#             */
/*   Updated: 2022/11/25 03:34:54 by skiratli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*st;
	char	ch;
	size_t	i;

	st = (char *)s;
	ch = (char )c;
	i = 0;
	while (i < n)
	{
		if (st[i] == ch)
			return (st + i);
		i++;
	}
	return (NULL);
}
