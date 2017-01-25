/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 13:36:59 by elemarch          #+#    #+#             */
/*   Updated: 2014/11/09 10:24:59 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	int		i;
	int		len;

	if (s == NULL)
		return (NULL);
	if (f == NULL)
		return (ft_strdup(s));
	i = 0;
	len = ft_strlen(s);
	new = ft_strnew(len);
	while (i < len)
	{
		new[i] = f(i, s[i]);
		i++;
	}
	return (new);
}
