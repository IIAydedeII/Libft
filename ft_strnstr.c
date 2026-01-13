/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adede <adede@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 15:09:29 by adede             #+#    #+#             */
/*   Updated: 2026/01/13 10:37:49 by adede            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	c;
	size_t	c2;

	c = 0;
	while (big[c] && len > 0)
	{
		c2 = 0;
		while (big[c + c2] == little[c2] && c + c2 < len && little[c2])
			c2++;
		if (little[c2] == '\0')
			return ((char *)&big[c]);
		c++;
	}
	return (NULL);
}
