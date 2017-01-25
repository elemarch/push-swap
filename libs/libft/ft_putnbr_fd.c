/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:38:36 by elemarch          #+#    #+#             */
/*   Updated: 2015/01/04 21:49:20 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	numb;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		numb = -n;
	}
	else
		numb = n;
	if (numb >= 10)
	{
		ft_putnbr_fd(numb / 10, fd);
		ft_putnbr_fd(numb % 10, fd);
	}
	else
		ft_putchar_fd(numb + 48, fd);
}
