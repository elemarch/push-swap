/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 10:52:26 by elemarch          #+#    #+#             */
/*   Updated: 2014/11/11 13:52:03 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*first;

	first = NULL;
	if (lst && f)
	{
		new = (*f)(lst);
		first = new;
		while (lst && new)
		{
			if (lst->next)
				new->next = (*f)(lst->next);
			new = new->next;
			lst = lst->next;
		}
	}
	return (first);
}
