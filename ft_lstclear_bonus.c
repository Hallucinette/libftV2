/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampocchi <ampocchi@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 20:18:05 by ampocchi          #+#    #+#             */
/*   Updated: 2025/01/14 13:30:07 by ampocchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Deletes and frees the given node and every successor of that node,
// using the function ’del’ and free(3).
// Finally, the pointer to the list must be set to NULL

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*save;
	t_list	*begin;

	begin = *lst;
	save = *lst;
	if (!lst)
		return ;
	if (*lst == NULL || !del)
		return ;
	while (save)
	{
		del(save->content);
		begin = save;
		save = save->next;
		free(begin);
	}
	*lst = NULL;
}
