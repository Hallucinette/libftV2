/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampocchi <ampocchi@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 12:48:54 by ampocchi          #+#    #+#             */
/*   Updated: 2025/01/14 13:21:35 by ampocchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns an array of strings obtained by
// splitting ’s’ using the character ’c’ as a delimiter.
// The array must end with a NULL pointer.

#include "libft.h"

static int	ft_count_word(char *str, char c)
{
	int		i;
	int		word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] != c && i == 0)
		{
			word++;
			i++;
		}
		if (str[i] != c && str[i - 1] == c)
			word++;
		i++;
	}
	return (word);
}

static int	ft_len_word(char *str, char c)
{
	int		len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (len);
}

static char	*ft_dup(char *src, char c)
{
	int		i;
	int		len;
	char	*dst;

	i = 0;
	len = ft_len_word(src, c);
	if (len == 0)
		return (NULL);
	dst = malloc(sizeof(*src) * (len + 1));
	if (!dst)
		return (NULL);
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

static char	**ft_fill_split(char *str, char c, char **tab)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str != c)
		{
			tab[i++] = ft_dup(str, c);
			if (!tab[i - 1])
			{
				ft_free_tab(tab);
				return (NULL);
			}
			str += ft_len_word(str, c);
		}
		else
			str++;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**tab;
	int		words;

	if (!s)
		return (NULL);
	str = (char *)s;
	words = ft_count_word(str, c);
	tab = ft_calloc(words + 1, sizeof(*tab));
	if (!tab)
		return (NULL);
	tab[words] = NULL;
	if (words == 0)
		return (tab);
	tab = ft_fill_split(str, c, tab);
	return (tab);
}
