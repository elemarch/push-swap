/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:14:28 by elemarch          #+#    #+#             */
/*   Updated: 2014/11/09 06:04:47 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*buffd;
	const char	*buffs;

	i = 0;
	buffd = (char*)dest;
	buffs = (const char*)src;
	while (i < n)
	{
		buffd[i] = buffs[i];
		i++;
	}
	return (dest);
}
