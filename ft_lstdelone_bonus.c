/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampocchi <ampocchi@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 19:53:27 by ampocchi          #+#    #+#             */
/*   Updated: 2025/01/14 13:29:03 by ampocchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Takes as a parameter a node and frees the memory of the node’s content using
// the function ’del’ given as a parameter and free the node.
// The memory of ’next’ must not be freed.

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (del || lst || lst->content)
	{
		del(lst->content);
		free(lst);
		lst = NULL;
	}
}
