/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skiratli <skiratli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:32:03 by skiratli          #+#    #+#             */
/*   Updated: 2022/11/25 06:10:51 by skiratli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	split_word(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static size_t	split_count(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s != '\0')
	{
		if (*s != c && (s[1] == '\0' || s[1] == c))
			len++;
		s++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	**array;

	if (!s)
		return (0);
	len = split_count(s, c);
	array = malloc(sizeof(char *) * len + 1);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		while (*s == c && *s != '\0')
			s++;
		array[i] = malloc(sizeof(char) * split_word(s, c) + 1);
		j = 0;
		while (*s != c && *s != '\0')
			array[i][j++] = *s++;
		array[i][j] = '\0';
		i++;
	}
	array[i] = NULL;
	return (array);
}
