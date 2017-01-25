/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 09:44:56 by elemarch          #+#    #+#             */
/*   Updated: 2015/01/04 23:30:02 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*buffd;
	const unsigned char	*buffs;

	i = 0;
	buffd = (unsigned char*)dst;
	buffs = (const unsigned char*)src;
	while (i < n)
	{
		buffd[i] = buffs[i];
		if (buffd[i] == (unsigned char)c)
			return (buffd + i + 1);
		i++;
	}
	return (NULL);
}
