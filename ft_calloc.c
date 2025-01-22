/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampocchi <ampocchi@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 10:57:55 by ampocchi          #+#    #+#             */
/*   Updated: 2025/01/15 16:08:18 by ampocchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The calloc() function allocates memory for an array of nmemb elements of size
// bytes each and returns a pointer to the allocated memory.
// The memory is set to zero. If nmemb or size is 0, then calloc()
// returns either NULL, or a unique pointer value that can later be successfully
// passed to free().

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	tab = (void *)malloc(nmemb * size);
	if (!tab)
		return (NULL);
	ft_bzero(tab, nmemb * size);
	return (tab);
}
