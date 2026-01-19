/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adede <adede@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 10:23:15 by adede             #+#    #+#             */
/*   Updated: 2026/01/19 12:06:39 by adede            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current_node;
	t_list	*next_node;

	current_node = *lst;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		ft_lstdelone(current_node, del);
		current_node = next_node;
	}
	*lst = NULL;
}
