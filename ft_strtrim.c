/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampocchi <ampocchi@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 12:39:56 by ampocchi          #+#    #+#             */
/*   Updated: 2025/01/14 13:20:46 by ampocchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters
// specified in ’set’ removed from the beginning and the end of the string.

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*end;
	size_t		len;
	char		*trimmed;

	end = s1 + ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	if (*s1 == '\0')
		return (ft_strdup(""));
	while (end > s1 && ft_strchr(set, *end))
		end--;
	len = end - s1 + 1;
	trimmed = (char *)malloc(len + 1);
	if (!trimmed)
		return (NULL);
	ft_memcpy(trimmed, s1, len);
	trimmed[len] = '\0';
	return (trimmed);
}
