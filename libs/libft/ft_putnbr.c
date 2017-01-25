/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 11:44:47 by elemarch          #+#    #+#             */
/*   Updated: 2015/01/04 20:00:44 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int numb;

	if (n < 0)
	{
		ft_putchar('-');
		numb = -n;
	}
	else
		numb = n;
	if (numb >= 10)
	{
		ft_putnbr(numb / 10);
		ft_putnbr(numb % 10);
	}
	else
		ft_putchar(numb + 48);
}
