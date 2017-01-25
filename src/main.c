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

void	end_message(int op, int el)
{
	if (op == -1)
		ft_putstr("\033[0m \n\n\033[4monly one element!\033[0m\n\n");
	if (op == 0)
		ft_putstr("\033[0m \n\n\033[4mpile already sorted!\033[0m\n\n");
	if (op > 0)
	{
		ft_putstrn("\033[0m \n\n\033[4mpile sorted:\033[0m [$N] ", op);
		ft_putstrn("\033[1moperation(s)\033[0m to sort [$N] ", el);
		ft_putstr("\033[1melements\033[0m.\n\n");
	}
}

void	push_swap(t_p a, int o)
{
	t_p			b;
	int			cases;
	int			op;

	b.nbr = (int*)malloc(sizeof(int) * a.size - 2);
	b.size = 0;
	pile_print(a, 'A');
	if (a.size > 2 && (cases = is_sort(&a, 0)))
	{
		ft_putstr("\n\n\033[4msorting pile :\n\n\033[0m");
		op = pile_sort(&a, &b, cases, o);
		ft_putstr("\n\n\033[4mfinal pile:\033[0m ");
		pile_print(a, 'A');
		end_message(op, a.size);
	}
	else if (a.size == 2 && is_sort(&a, 0))
	{
		ft_putstr("\n\n\033[4msorting pile :\n\n\033[0m");
		op_swap(&a, NULL, 'a', o);
		ft_putstr("\n\n\033[4mfinal pile:\033[0m ");
		pile_print(a, 'A');
		end_message(1, a.size);
	}
	else
		end_message(0, 0);
}

int		main(int argc, char **argv)
{
	t_p			a;
	int			opts;

	if (argc < 2)
		return (0);
	opts = init_program(argv, &a);
	if (a.size == 0 || opts == -1)
		ft_putstr("Error\n\tUsage: -[hv] [number1 number2 ... numberX]");
	else if (a.size == 1)
		end_message(-1, 0);
	else if (opts == -2)
		end_message(0, 0);
	else
		push_swap(a, opts);
	ft_putchar('\n');
	return (0);
}
