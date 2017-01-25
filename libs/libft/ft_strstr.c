/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 09:47:12 by elemarch          #+#    #+#             */
/*   Updated: 2014/11/09 10:29:35 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define INITIALIZE i = 0; j = 0; p = 0;

char	*ft_strstr(const char *str1, const char *str2)
{
	int		i;
	int		j;
	int		p;
	char	*buff;

	INITIALIZE;
	buff = (char*)str1;
	if (!str2[0] || !str2)
		return ((char*)str1);
	while (str1[i])
	{
		while (str1[i] == str2[j] && str2[j])
		{
			j++;
			i++;
		}
		if (!str2[j])
			return (&buff[i - j]);
		else
		{
			p++;
			i = p;
		}
	}
	return (NULL);
}
