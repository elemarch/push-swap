/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:10:49 by elemarch          #+#    #+#             */
/*   Updated: 2014/11/07 16:07:58 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*buff;

	buff = (char *)str;
	i = 0;
	while (i < n)
	{
		buff[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
