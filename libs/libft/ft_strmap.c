/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:22:02 by elemarch          #+#    #+#             */
/*   Updated: 2014/11/09 10:10:36 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		new[i] = f(s[i]);
		i++;
	}
	return (new);
}
