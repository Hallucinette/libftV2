/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampocchi <ampocchi@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 23:14:11 by ampocchi          #+#    #+#             */
/*   Updated: 2025/01/14 13:36:56 by ampocchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// change an uppercase letter to a lowercase letter

#include "libft.h" 

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
