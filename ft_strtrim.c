/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skiratli <skiratli@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:10:55 by skiratli          #+#    #+#             */
/*   Updated: 2022/11/21 15:40:37 by skiratli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_control(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	len;

	if (!s1)
		return (0);
	start = 0;
	while (s1[start] && ft_control(set, s1[start]))
		start++;
	len = ft_strlen(s1);
	while (len > start && ft_control(set, s1[len - 1]))
		len--;
	str = (char *)malloc(sizeof(char) * (len - start + 1));
	if (!str)
		return (0);
	i = 0;
	while (start < len)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = 0;
	return (str);
}
