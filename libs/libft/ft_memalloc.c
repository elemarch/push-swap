/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 10:42:56 by elemarch          #+#    #+#             */
/*   Updated: 2014/11/06 14:57:05 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	int		*ptr;
	size_t	i;

	i = 0;
	ptr = (int*)malloc(size);
	if (ptr == NULL)
		return (NULL);
	while (i < size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
