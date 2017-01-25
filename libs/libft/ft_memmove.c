/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 11:34:50 by elemarch          #+#    #+#             */
/*   Updated: 2014/11/09 06:08:03 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char		*buffd;
	const char	*buffs;

	buffd = (char*)dest;
	buffs = (const char*)src;
	if (buffs <= buffd)
	{
		buffd += n - 1;
		buffs += n - 1;
		while (n > 0)
		{
			*buffd = *buffs;
			n--;
			buffd--;
			buffs--;
		}
	}
	else
		return (ft_memcpy(buffd, buffs, n));
	return (dest);
}
