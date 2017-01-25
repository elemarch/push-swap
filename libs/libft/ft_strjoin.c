/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 14:27:19 by elemarch          #+#    #+#             */
/*   Updated: 2014/11/09 15:41:06 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*verif(const char *s1, const char *s2)
{
	if (!s1)
	{
		if (!s2)
			return (NULL);
		else
			return (ft_strdup(s2));
	}
	else
		return (ft_strdup(s1));
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		size;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (verif(s1, s2));
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	i = 0;
	j = 0;
	new = ft_strnew(size + 1);
	if (new == NULL)
		return (NULL);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	return (new);
}
