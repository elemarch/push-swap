/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 11:16:33 by elemarch          #+#    #+#             */
/*   Updated: 2015/01/04 21:55:46 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (!str1 && !str2)
		return (0);
	while (str1[i] && str2[i] && i < n)
	{
		if (str1[i] == str2[i])
			i++;
		else
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	}
	if (i < n)
		return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	return (0);
}
