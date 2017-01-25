/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/28 18:05:18 by elemarch          #+#    #+#             */
/*   Updated: 2015/04/28 18:05:19 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

#define CASE_A ((!rev && tmp[0] < tmp[1]) || (rev && tmp[0] > tmp[1]))
#define CASE_B ((!rev && tmp[i] < tmp[i + 1]) || (rev && tmp[i] > tmp[i + 1]))
#define A_MED ((pile_a->size)/2)

int		is_sort(t_p *pile_a, int rev)
{
	int		i;
	int		*tmp;

	tmp = pile_a->nbr;
	i = 1;
	while (i <= pile_a->size - 3)
	{
		if ((!rev && tmp[i] < tmp[i + 1]) || (rev && tmp[i] > tmp[i + 1]))
			return (1);
		i++;
	}
	if (CASE_A && CASE_B)
		return (-3);
	if (CASE_A)
		return (-2);
	if (CASE_B)
		return (-1);
	return (0);
}

int		sort_beg(t_p *pile_a, int o)
{
	op_revrot(pile_a, NULL, 'a', o);
	op_revrot(pile_a, NULL, 'a', o);
	op_swap(pile_a, NULL, 'a', o);
	op_rotate(pile_a, NULL, 'a', o);
	op_rotate(pile_a, NULL, 'a', o);
	return (5);
}

int		sort_default(t_p *pile_a, t_p *pile_b, int o)
{
	int		b;
	int		pos;
	int		op;

	op = 0;
	while (pile_a->size > 3)
	{
		pos = find_bigger(*pile_a, &b);
		if (b == PILE_A_LAST)
			op += op_push(pile_a, pile_b, 'b', o);
		else if (pos > A_MED)
			op += op_rotate(pile_a, NULL, 'a', o);
		else
			op += op_revrot(pile_a, NULL, 'a', o);
	}
	op += sort_three(pile_a, 'a', o);
	op += sort_empty(pile_a, pile_b, 'a', o);
	return (op);
}

int		pile_sort(t_p *pile_a, t_p *pile_b, int cases, int o)
{
	int		op;

	op = 0;
	if (pile_a->size == 3)
		op += sort_three(pile_a, 'a', o);
	else if (cases == -3)
	{
		op += op_swap(pile_a, NULL, 'a', o);
		op += sort_beg(pile_a, o);
	}
	else if (cases == -1)
		op += op_swap(pile_a, NULL, 'a', o);
	else if (cases == -2)
		op += sort_beg(pile_a, o);
	else
		op += sort_default(pile_a, pile_b, o);
	if (is_sort(pile_a, 0))
		op += pile_sort(pile_a, pile_b, 1, o);
	return (op);
}
