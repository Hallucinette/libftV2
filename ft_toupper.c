/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampocchi <ampocchi@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 23:10:16 by ampocchi          #+#    #+#             */
/*   Updated: 2025/01/14 13:37:27 by ampocchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// change an lowercase letter to a uppercase letter

#include "libft.h" 

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
