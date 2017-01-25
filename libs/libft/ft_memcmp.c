/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:54:45 by elemarch          #+#    #+#             */
/*   Updated: 2014/11/09 06:34:59 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	buff1;
	unsigned char	buff2;

	while (n > 0)
	{
		buff1 = *(unsigned char*)str1;
		buff2 = *(unsigned char*)str2;
		if (buff1 != buff2)
			return (buff1 - buff2);
		n--;
		str1++;
		str2++;
	}
	return (0);
}
