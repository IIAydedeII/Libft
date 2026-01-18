/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adede <adede@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 10:54:40 by adede             #+#    #+#             */
/*   Updated: 2026/01/16 11:52:20 by adede            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*ft_strldup(const char *s, size_t size)
{
	char	*dup;

	dup = ft_calloc(size + 1, sizeof(char));
	if (!dup)
		return (NULL);
	ft_memcpy(dup, s, size);
	return (dup);
}

static void	free_split(char **split, size_t i)
{
	while (i > 0)
		free(split[--i]);
	free(split);
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	size_t	word_length;
	size_t	word_index;

	split = ft_calloc(ft_count_words(s, c) + 1, sizeof(char *));
	if (!split)
		return (NULL);
	word_index = 0;
	while (*s)
		if (*s != c)
		{
			word_length = 0;
			while (s[word_length] != c && s[word_length])
				word_length++;
			split[word_index] = ft_strldup(s, word_length);
			if (!split[word_index])
				return (free_split(split, word_index), NULL);
			word_index++;
			s += word_length;
		}
		else
			s++;
	split[word_index]  = NULL;
	return (split);
}
