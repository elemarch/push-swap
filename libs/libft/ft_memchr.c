/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:42:02 by elemarch          #+#    #+#             */
/*   Updated: 2015/01/04 22:15:05 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*buff;

	if (!str)
		return (NULL);
	buff = (unsigned char*)str;
	while (n > 0)
	{
		if (*buff == (unsigned char)c)
			return ((void*)buff);
		n--;
		buff++;
	}
	return (NULL);
}
