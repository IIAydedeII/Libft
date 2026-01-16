/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adede <adede@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 15:09:29 by adede             #+#    #+#             */
/*   Updated: 2026/01/16 10:45:04 by adede            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*strjoin;
	char	*start;

	strjoin = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (!strjoin)
		return (NULL);
	start = strjoin;
	while (*s1)
		*strjoin++ = *s1++;
	while (*s2)
		*strjoin++ = *s2++;
	return (start);
}
