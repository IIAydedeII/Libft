/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adede <adede@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 14:18:34 by adede             #+#    #+#             */
/*   Updated: 2026/01/13 17:18:15 by adede            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	total_size;

	total_size = nmemb * size;
	p = malloc(total_size);
	if (!p)
		return (NULL);
	ft_bzero(p, total_size);
	return (p);
}

// void *ft_calloc(size_t nmemb, size_t size)
// {
//     void *p;
//     size_t i;

//     // Check for zero allocation or overflow
//     if (nmemb == 0 || size == 0)
//         return malloc(0); // malloc(0) is allowed

//     if (nmemb > SIZE_MAX / size)
//         return NULL; // prevents overflow

//     p = malloc(nmemb * size);
//     if (!p)
//         return NULL;

//     ft_bzero(p, nmemb * size);
//     return p;
// }

// How this avoids overflow:

//     SIZE_MAX / size is the largest number of elements we can safely allocate without overflowing.

//     If nmemb exceeds that, we immediately return NULL.

//     Only then do we multiply nmemb * size for malloc and ft_bzero.

// Optional ultra-safe version (avoids multiplication entirely):

// Some libraries allocate memory element by element to avoid ever multiplying:

// void *ft_calloc(size_t nmemb, size_t size)
// {
//     void *p;
//     char *ptr;
//     size_t i;

//     if (nmemb == 0 || size == 0)
//         return malloc(0);

//     if (nmemb > SIZE_MAX / size)
//         return NULL;

//     p = malloc(nmemb * size);
//     if (!p)
//         return NULL;

//     ptr = (char *)p;
//     for (i = 0; i < nmemb * size; i++)
//         ptr[i] = 0;

//     return p;
// }

// This version mimics what calloc does at the byte level. No matter what, overflow is impossible because we check before multiplying.
