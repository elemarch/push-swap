/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <elemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/01 12:15:37 by elemarch          #+#    #+#             */
/*   Updated: 2015/05/03 01:40:40 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
** ========================================================================= **
** pile_fill	| fill an already allocated t_p with number from a 		 **
**				| verified string src.										 **
** ------------------------------------------------------------------------- **
** pile_malloc	| allocate memory to create a pile and define pile.size to i **
** ========================================================================= **
*/

#include <stdio.h>

static void		pile_fill(t_p *pile, char **src)
{
	int		*tmp;
	int		i;

	i = 1;
	tmp = pile->nbr;
	while ((src[i] && src[i][0] == '-') || !ft_strcmp(src[i], "--"))
	{
		if (ISNUM(src[i][1]))
			break ;
		i++;
	}
	while (src[i])
	{
		*tmp = ft_atoi(src[i]);
		tmp++;
		i++;
	}
}

static t_p		pile_malloc(int size)
{
	t_p	pile;

	pile.nbr = (int*)malloc(sizeof(int) * size);
	pile.size = size;
	return (pile);
}

t_p				pile_create(char **list)
{
	int		i;
	int		t;
	t_p		pile;

	t = 1;
	while ((list[t] && list[t][0] == '-') || !ft_strcmp(list[t], "--"))
	{
		if (ISNUM(list[t][1]))
			break ;
		t++;
	}
	i = t;
	while (list[i])
		i++;
	pile = pile_malloc(i - t);
	pile_fill(&pile, list);
	return (pile);
}

void			pile_print(t_p pile, char c)
{
	int		i;

	i = 0;
	ft_putstrc("$C |", c);
	while (i < pile.size)
	{
		ft_putnbr(pile.nbr[i]);
		ft_putchar('|');
		i++;
	}
	ft_putchar('\n');
}

void			pile_destroy(t_p *pile)
{
	free(pile->nbr);
	pile->size = 0;
}
