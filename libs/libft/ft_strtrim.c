/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:39:03 by elemarch          #+#    #+#             */
/*   Updated: 2014/11/09 10:27:22 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	char	*new;

	i = 0;
	if (s == NULL)
		return (NULL);
	while ((*s == ' ' || *s == '\n' || *s == '\t') && (*s != '\0'))
		s++;
	len = ft_strlen(s);
	if (len > 1)
		while ((s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
				&& (s[len - 1] != '\0'))
			len--;
	new = (char*)malloc((len + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	while (i < len && s[i] != '\0')
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
