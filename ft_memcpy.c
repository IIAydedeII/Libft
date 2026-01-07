/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adede <adede@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 09:30:59 by adede             #+#    #+#             */
/*   Updated: 2026/01/07 09:44:48 by adede            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest_casted;
	char	*src_casted;

	dest_casted = (char *)dest;
	src_casted = (char *)src;
	while (n > 0)
	{
		dest_casted[n - 1] = src_casted[n - 1];
		n--;
	}
	return (dest);
}
