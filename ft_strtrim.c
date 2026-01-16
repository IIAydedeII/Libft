/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adede <adede@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 10:54:40 by adede             #+#    #+#             */
/*   Updated: 2026/01/16 11:52:20 by adede            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_includes(const char *set, const char c)
{
	while (*set)
	{
		if (*set++ == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*strtrim;
	size_t	index_start;
	size_t	index_end;
	size_t	length;

	index_start = 0;
	while (s1[index_start] && ft_includes(set, s1[index_start]))
		index_start++;
	index_end = ft_strlen(s1);
	if (index_end > 0)
		index_end--;
	while (index_end > index_start && ft_includes(set, s1[index_end]))
		index_end--;
	length = 0;
	if (index_end >= index_start)
		length = index_end + 1 - index_start;
	strtrim = ft_calloc(length + 1, sizeof(char));
	if (!strtrim)
		return (NULL);
	ft_strlcpy(strtrim, s1 + index_start, length + 1);
	return (strtrim);
}
