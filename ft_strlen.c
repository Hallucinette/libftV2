/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampocchi <ampocchi@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 22:39:25 by ampocchi          #+#    #+#             */
/*   Updated: 2025/01/14 13:50:44 by ampocchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strlen() function calculates the length of the string pointed
// to by s, excluding the terminating null byte ('\0').

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
