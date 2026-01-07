/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adede <adede@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 09:30:59 by adede             #+#    #+#             */
/*   Updated: 2026/01/07 16:34:50 by adede            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest_casted;
	char	*src_casted;
	size_t	c;

	dest_casted = (char *)dest;
	src_casted = (char *)src;
	if (dest_casted == src_casted)
		return (NULL);
	else if (dest_casted > src_casted)
	{
		while (n--)
			dest_casted[n] = src_casted[n];
	}
	else
	{
		c = 0;
		while (c++ < n)
			dest_casted[c - 1] = src_casted[c - 1];
	}
	return (dest);
}
