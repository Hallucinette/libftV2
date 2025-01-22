/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampocchi <ampocchi@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 23:03:21 by ampocchi          #+#    #+#             */
/*   Updated: 2025/01/14 16:27:23 by ampocchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Copy strings. It take the full size of the buffer (not just the length)
// and guarantee to NUL-terminate the result (as long as size is larger than 0
// or, in the case of strlcat(), as long as there is at least one byte free in
// dst). Note that a byte for the NUL should be included in size.

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
