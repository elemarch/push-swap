/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 09:46:38 by elemarch          #+#    #+#             */
/*   Updated: 2015/01/06 18:18:12 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (!str2)
		return ((char*)(str1));
	while (str1[i] && i + ft_strlen(str2) <= n)
	{
		if (!strncmp(str1 + i, str2, ft_strlen(str2)))
			return (str1 + i);
		i++;
	}
	return (NULL);
}
