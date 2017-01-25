/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 13:27:21 by elemarch          #+#    #+#             */
/*   Updated: 2014/11/06 15:03:39 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrs(const char *str, const char *str2)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '$' && str[i + 1] == 'S')
		{
			ft_putstr(str2);
			i += 2;
		}
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
}
