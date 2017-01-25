/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/28 18:05:18 by elemarch          #+#    #+#             */
/*   Updated: 2015/04/28 18:05:19 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int			find_bigger(t_p pile, int *b)
{
	int	i;

	i = 1;
	*b = (pile.nbr)[0];
	while (i < pile.size)
	{
		if ((pile.nbr)[i] < *b)
			*b = (pile.nbr)[i];
		i++;
	}
	i = 0;
	while ((pile.nbr)[i] != *b)
		i++;
	return (i);
}

static int	check_nbr(char **list)
{
	int		i;
	int		j;

	i = 1;
	while ((list[i] && list[i][0] == '-') || !ft_strcmp(list[i], "--"))
	{
		if (ISNUM(list[i][1]))
			break ;
		i++;
	}
	while (list[i])
	{
		j = 0;
		if (list[i][j] == '-' || list[i][j] == '+')
			j++;
		while (list[i][j])
		{
			if (!ISNUM(list[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int	check_double(char **list)
{
	int		i;
	int		j;

	i = 0;
	while (list[i])
	{
		j = i + 1;
		while (list[j])
		{
			if (!strcmp(list[i], list[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int	check_max(char **list)
{
	int		i;

	i = 1;
	while (list[i])
	{
		if (ft_strlen(list[i]) == ft_strlen("2147483647"))
		{
			if (ft_strcmp(list[i], "2147483647") > 0)
				return (0);
		}
		else if (ft_strlen(list[i]) > ft_strlen("2147483647"))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int			check_arg(char **list)
{
	if (check_nbr(list) && check_double(list) && check_max(list))
		return (1);
	return (0);
}
