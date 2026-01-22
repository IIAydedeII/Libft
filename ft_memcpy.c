/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adede <adede@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 09:30:59 by adede             #+#    #+#             */
/*   Updated: 2026/01/22 09:40:48 by adede            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_casted;
	unsigned char	*src_casted;

	dest_casted = (unsigned char *)dest;
	src_casted = (unsigned char *)src;
	while (n--)
		dest_casted[n] = src_casted[n];
	return (dest);
}
