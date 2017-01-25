/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 03:53:55 by elemarch          #+#    #+#             */
/*   Updated: 2014/11/11 14:26:40 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*new;
	void	*buff;

	new = (t_list *)malloc(sizeof(t_list));
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		buff = (void *)malloc(content_size);
		buff = ft_memcpy(buff, content, content_size);
		new->content = buff;
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}
