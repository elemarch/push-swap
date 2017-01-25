/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:10:49 by elemarch          #+#    #+#             */
/*   Updated: 2014/11/06 14:54:54 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void ft_bzero(void *str, size_t n)
{
	size_t	i;
	char	*buff;

	i = 0;
	buff = (char*)str;
	while (i < n)
	{
		buff[i] = '\0';
		i++;
	}
}
