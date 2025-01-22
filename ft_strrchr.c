/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampocchi <ampocchi@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 23:16:59 by ampocchi          #+#    #+#             */
/*   Updated: 2025/01/14 13:56:18 by ampocchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strrchr() function shall locate the last occurrence of c
// (converted to a char) in the string pointed to by s.
// The terminating NUL character is considered to be part of the string.

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
