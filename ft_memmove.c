/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampocchi <ampocchi@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 23:00:56 by ampocchi          #+#    #+#             */
/*   Updated: 2025/01/17 15:22:44 by ampocchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memmove() function copies n bytes from memory area src to
// memory area dest. The memory areas may overlap: copying takes place as though
// the bytes in src are first copied into a temporary array that does not
// overlap src or dest, and the bytes are then copied from the temporary
// array to dest.

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	if (dest == NULL && src == NULL && n > 0)
		return (dest);
	if (s2 > s1)
		while (n--)
			*s1++ = *s2++;
	else
		while (n--)
			s1[n] = s2[n];
	return (dest);
}
