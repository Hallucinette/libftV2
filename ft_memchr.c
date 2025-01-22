/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampocchi <ampocchi@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 23:19:30 by ampocchi          #+#    #+#             */
/*   Updated: 2025/01/14 13:41:46 by ampocchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memchr() function scans the initial n bytes of the memory
// area pointed to by s for the first instance of c.  Both c and the
// bytes of the memory area pointed to by s are interpreted as unsigned char.

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
