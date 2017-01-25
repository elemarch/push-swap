/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/28 18:05:18 by elemarch          #+#    #+#             */
/*   Updated: 2015/04/28 18:05:19 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	case_three(int a, int b, int c)
{
	if (a > b && b > c)
		return (0);
	else if (a < b && b > c && a < c)
		return (2);
	else if (a > b && b < c && a < c)
		return (3);
	else
		return (1);
}

int			sort_three(t_p *pile, char c, int o)
{
	int		*tmp;
	int		res;
	int		op;

	op = 0;
	tmp = pile->nbr;
	while ((res = case_three(tmp[0], tmp[1], tmp[2])))
	{
		if (res == 1)
			op += op_swap(pile, NULL, c, o);
		else if (res == 3)
			op += op_rotate(pile, NULL, c, o);
		else if (res == 2)
			op += op_revrot(pile, NULL, c, o);
	}
	return (op);
}

int			sort_two(t_p *pile, char c, int o)
{
	int		*tmp;

	tmp = pile->nbr;
	if (tmp[0] < tmp[1])
	{
		op_swap(pile, NULL, c, o);
		return (1);
	}
	return (0);
}

int			sort_empty(t_p *dest, t_p *src, char c, int o)
{
	int		op;

	op = 0;
	while (src->size > 0)
		op += op_push(src, dest, c, o);
	return (op);
}
