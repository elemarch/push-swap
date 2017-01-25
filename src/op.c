/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/28 18:05:18 by elemarch          #+#    #+#             */
/*   Updated: 2015/04/28 18:05:19 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	op_swap(t_p *p_a, t_p *p_b, char c, int o)
{
	int		buff;
	int		*tmp;
	int		size;

	tmp = p_a->nbr;
	size = p_a->size;
	if (p_a->size < 2)
		return (0);
	buff = tmp[size - 1];
	tmp[size - 1] = tmp[size - 2];
	tmp[size - 2] = buff;
	if (p_b)
	{
		if (o >= 1)
			ft_putstrc("\033[31mss\033[0m\t", c);
		op_swap(p_b, NULL, 0, o);
		if (o == 2)
			print_both(*p_a, *p_b);
	}
	else if (c)
		opt_test_swap(p_a, c, o);
	return (1);
}

int	op_push(t_p *p_a, t_p *p_b, char c, int o)
{
	int		*tmp_a;
	int		*tmp_b;

	if (o >= 1)
		ft_putstrc("\033[33mp$C\033[0m\t", c);
	tmp_a = p_a->nbr;
	tmp_b = p_b->nbr;
	if (p_a->size < 1)
		return (0);
	p_b->size++;
	tmp_b[p_b->size - 1] = tmp_a[p_a->size - 1];
	p_a->size--;
	if (o == 2)
		pile_print(*p_b, c - 'a' + 'A');
	return (1);
}

int	op_rotate(t_p *p_a, t_p *p_b, char c, int o)
{
	int		buff;
	int		*tmp;
	int		size;

	tmp = p_a->nbr;
	size = p_a->size + 1;
	if (p_a->size < 2)
		return (0);
	buff = tmp[size - 2];
	while (--size >= 2)
		tmp[size - 1] = tmp[size - 2];
	tmp[0] = buff;
	if (p_b)
	{
		if (o >= 1)
			ft_putstrc("\033[34mrr\033[0m\t", c);
		op_rotate(p_b, NULL, 0, o);
		if (o == 2)
			print_both(*p_a, *p_b);
	}
	else if (c)
		opt_test_rotate(p_a, c, o);
	return (1);
}

int	op_revrot(t_p *p_a, t_p *p_b, char c, int o)
{
	int		buff;
	int		*tmp;
	int		size;
	int		i;

	i = -1;
	tmp = p_a->nbr;
	size = p_a->size;
	if (p_a->size < 2)
		return (0);
	buff = tmp[0];
	while (++i < size)
		tmp[i] = tmp[i + 1];
	tmp[size - 1] = buff;
	if (p_b)
	{
		if (o >= 1)
			ft_putstrc("\033[37mrrr\033[0m\t", c);
		op_revrot(p_b, NULL, 0, o);
		if (o == 2)
			print_both(*p_a, *p_b);
	}
	else if (c)
		opt_test_revrot(p_a, c, o);
	return (1);
}
