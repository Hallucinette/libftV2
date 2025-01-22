/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampocchi <ampocchi@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 23:05:40 by ampocchi          #+#    #+#             */
/*   Updated: 2025/01/14 16:26:44 by ampocchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Concatenate strings. It take the full size of the buffer
// (not just the length) and guarantee to NUL-terminate the result (as long as
// size is larger than 0 or, in the case of strlcat(), as long as there is at
// least one byte free in dst). Note that a byte for the NUL should be included
// in size.

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	if (size < ft_strlen(dst))
		return (size + ft_strlen(src));
	if (size == 0)
		return (ft_strlen(src));
	while (dst[i])
		i++;
	if (size <= i)
		return (size + ft_strlen(src));
	k = i;
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (k + ft_strlen(src));
}
