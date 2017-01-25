/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/26 11:05:56 by elemarch          #+#    #+#             */
/*   Updated: 2014/11/26 16:19:43 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddend(t_list **alst, t_list *new)
{
	t_list	*temp;

	if (new)
	{
		temp = *alst;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
		new->prev = temp;
	}
}
