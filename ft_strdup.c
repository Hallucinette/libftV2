/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampocchi <ampocchi@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 11:05:44 by ampocchi          #+#    #+#             */
/*   Updated: 2025/01/14 13:45:31 by ampocchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strdup() function returns a pointer to a new string which is
// a duplicate of the string s.  Memory for the new string is
// obtained with malloc(3), and can be freed with free(3).

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
