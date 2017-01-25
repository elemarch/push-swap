/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 11:19:28 by elemarch          #+#    #+#             */
/*   Updated: 2014/11/08 11:25:58 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_strnew(size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char*)malloc(sizeof(char) * (size + 1));
	if (ptr != NULL)
	{
		while (i <= size)
		{
			ptr[i] = '\0';
			i++;
		}
	}
	else
		return (NULL);
	return (ptr);
}
