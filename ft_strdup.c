/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adede <adede@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 15:09:29 by adede             #+#    #+#             */
/*   Updated: 2026/01/14 11:03:34 by adede            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	buff_len;

	buff_len = ft_strlen(s) + 1;
	dup = malloc(buff_len);
	if (!dup)
		return (NULL);
	ft_memcpy(dup, s, buff_len);
	return (dup);
}
