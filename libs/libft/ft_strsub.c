/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 14:09:30 by elemarch          #+#    #+#             */
/*   Updated: 2014/11/09 15:40:00 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;
	size_t	end;

	if (s == NULL)
		return (NULL);
	i = 0;
	end = start + len;
	new = ft_strnew(len + 1);
	if (new == NULL)
		return (NULL);
	while (i < end)
	{
		if (i >= start)
			new[i - start] = s[i];
		i++;
	}
	return (new);
}
