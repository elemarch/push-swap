/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:38:51 by elemarch          #+#    #+#             */
/*   Updated: 2015/01/06 17:52:06 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	if (s[0] != c)
		n++;
	if (s[0] == '\0')
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			n++;
		i++;
	}
	if (s[i - 1] == c)
		n--;
	return (n);
}

static void	*new_word(const char *src, int index, char c)
{
	int		i;
	int		beg;
	char	*new;

	i = 0;
	if (src[0] != c)
		index--;
	while (index >= 0)
	{
		if (src[i] == c && src[i + 1] != c)
			index--;
		i++;
	}
	beg = i;
	while (src[i] != c)
		i++;
	new = ft_strsub(src, beg, i - beg);
	return (new);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		words;
	int		i;

	if (s == NULL)
		return (NULL);
	words = count_words(s, c);
	i = 0;
	tab = (char **)malloc(sizeof(*tab) * words + 1);
	tab[words] = NULL;
	if (!tab)
		return (NULL);
	while (i < words)
	{
		tab[i] = new_word(s, i, c);
		i++;
	}
	return (tab);
}
