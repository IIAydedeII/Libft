/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adede <adede@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 15:09:29 by adede             #+#    #+#             */
/*   Updated: 2026/01/16 10:30:22 by adede            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	substr = ft_calloc(len + 1, sizeof(char));
	if (!substr)
		return (NULL);
	if (start > ft_strlen(s))
		return (substr);
	i = 0;
	while (len - i > 0 && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	return (substr);
}
