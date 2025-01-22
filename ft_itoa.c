/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampocchi <ampocchi@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 17:50:45 by ampocchi          #+#    #+#             */
/*   Updated: 2025/01/14 13:22:11 by ampocchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns a string representing the integer
// received as an argument. Negative numbers must be handled.

#include "libft.h"

static int	ft_len(int n)
{
	int		len;

	len = 1;
	if (n < 0)
		len++;
	while ((n != 0) && (n <= -10 || n >= 10))
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*ft_stocknbr(int n, char *str)
{
	int		i;
	int		power;
	int		save;

	i = -1;
	power = 1;
	save = n;
	if (n < 0)
	{
		i = 0;
		power = -1;
		str[i] = '-';
	}
	while (n <= -10 || n >= 10)
	{
		n = n / 10;
		power = power * 10;
	}
	while (power != 0)
	{
		str[++i] = save / power + '0';
		save = save - (save / power) * power;
		power = power / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = ft_len(n);
	str = malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (0);
	str = ft_stocknbr(n, str);
	str[len] = '\0';
	return (str);
}
