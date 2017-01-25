/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:36:48 by elemarch          #+#    #+#             */
/*   Updated: 2015/01/04 21:44:17 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	numb_write(char *str, int n, int size)
{
	int c;

	str[size] = '\0';
	if (n == 0)
	{
		str[0] = '0';
	}
	if (n != 0)
	{
		while (n > 0)
		{
			c = n % 10;
			str[size] = c + '0';
			n = n / 10;
			size--;
		}
	}
}

int			check_sign(int n, int *size, int *temp)
{
	*size = 0;
	if (n < 0)
	{
		size++;
		*temp = -n;
		return (-1);
	}
	*temp = n;
	return (1);
}

char		*ft_itoa(int n)
{
	int		size;
	int		temp;
	char	*new;
	int		sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = check_sign(n, &size, &temp);
	while (temp > 10)
	{
		temp = temp / 10;
		size++;
	}
	new = ft_strnew(size + 1);
	if (new == NULL)
		return (NULL);
	temp = 0;
	if (sign == -1)
	{
		new[0] = '-';
		n = -n;
		size += 1;
	}
	numb_write(new, n, size);
	return (new);
}
