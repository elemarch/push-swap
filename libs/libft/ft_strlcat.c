/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 11:35:03 by elemarch          #+#    #+#             */
/*   Updated: 2014/11/09 10:07:42 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*c;
	char	*buff;
	size_t	len;

	c = (char *)ft_memchr(dst, '\0', size);
	if (c == NULL)
		return (size + ft_strlen(src));
	buff = (char *)src;
	len = (size_t)(c - dst) + ft_strlen(buff);
	while ((size_t)(c - dst) < size - 1 && *buff)
	{
		*c = *buff;
		c++;
		buff++;
	}
	*c = '\0';
	return (len);
}
