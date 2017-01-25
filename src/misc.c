/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/28 18:05:18 by elemarch          #+#    #+#             */
/*   Updated: 2015/05/02 14:41:50 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void			print_both(t_p a, t_p b)
{
	pile_print(a, 'A');
	ft_putchar('\t');
	pile_print(b, 'B');
}

void			opt_test_swap(t_p *p_a, char c, int o)
{
	if (o >= 1)
		ft_putstrc("\033[32ms$C\033[0m\t", c);
	if (o == 2)
		pile_print(*p_a, c - 'a' + 'A');
}

void			opt_test_rotate(t_p *p_a, char c, int o)
{
	if (o >= 1)
		ft_putstrc("\033[35mr$C\033[0m\t", c);
	if (o == 2)
		pile_print(*p_a, c - 'a' + 'A');
}

void			opt_test_revrot(t_p *p_a, char c, int o)
{
	if (o >= 1)
		ft_putstrc("\033[36mrr$C\033[0m\t", c);
	if (o == 2)
		pile_print(*p_a, c - 'a' + 'A');
}
