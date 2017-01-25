/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/28 18:04:16 by elemarch          #+#    #+#             */
/*   Updated: 2015/04/28 18:04:23 by elemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

# define PILE_B_LAST (pile_b->nbr)[pile_b->size - 1]
# define PILE_A_LAST (pile_a->nbr)[pile_a->size - 1]

/*
** =============================== GENERAL ================================= **
** This program uses my libft only. 										 **
** Here are the options : 													 **
**  h: "hide" forbid the program to print the operations made Overrides v.	 **
**	v: "visualize" prints the piles after each operation. Overrides h.		 **
** ========================================================================= **
*/

/*
** ============================== STRUCTURES =============================== **
*/

typedef struct	s_pile
{
	int			*nbr;
	int			size;
}				t_p;

/*
** ============================== PROTOTYPES =============================== **
** 																			 **
** === pile.c == 5 functions =============================================== **
** pile_create	| creates a int* from a char table							 **
**				| 										   (needs 2 statics) **
** ------------------------------------------------------------------------- **
** pile_destroy	| frees a pile->nbr and set i to 0							 **
** ------------------------------------------------------------------------- **
** pile_print	| prints a p 												 **
** ========================================================================= **
*/

t_p				pile_create(char **list);
void			pile_destroy(t_p *pile);
void			pile_print(t_p pile, char c);

/*
** === pile_sort.c == 2 functions ========================================== **
** pile_sort	| sort pile_a with pile_b help and returns the number of 	 **
**				| operations made											 **
** ------------------------------------------------------------------------- **
** is_sort		| returns 0 if pile is sorted, 1 if not. if rev, the func 	 **
**				| will check from bigger to smaller. returns -1 if only the  **
**				| end is swapped, and -2 if it's the beginning				 **
** ========================================================================= **
*/

int				pile_sort(t_p *pile_a, t_p *pile_b, int cases, int o);
int				is_sort(t_p *pile_a, int rev);

/*
** === check.c == 5 functions ============================================== **
** check_arg	| checks if arg re correctly formatted						 **
**				| 										   (needs 3 statics) **
** ------------------------------------------------------------------------- **
** find_bigger	| finds and the biggest number of a pile. Returns its pos in **
**				| the pile 										 			 **
** ========================================================================= **
*/

int				check_arg(char **list);
int				find_bigger(t_p pile, int *b);

/*
** === sort.c == 4 functions =============================================== **
** sort_three	| sort a three-long pile 									 **
**				| 										   (needs 1 statics) **
** ------------------------------------------------------------------------- **
** sort_two		| sort a two-long pile 										 **
** ------------------------------------------------------------------------- **
** sort_empty	| empty src into dest 										 **
** ========================================================================= **
*/

int				sort_three(t_p *pile, char c, int o);
int				sort_empty(t_p *dest, t_p *src, char c, int o);

/*
** === op.c == 4 functions ================================================= **
** op_swap		| swaps two last element of one or two pile (pile_b can be	 **
**              | set to NULL)												 **
** ------------------------------------------------------------------------- **
** op_push		| pushes the last element of pile_a into pile_b				 **
** ------------------------------------------------------------------------- **
** op_rotate	| rotates one or two pile (pile_b can be NULL) from bottom	 **
**				| to top. The element on top comes to the bottom.			 **
** ------------------------------------------------------------------------- **
** op_revrot	| same as op_rotate but from top to bottom					 **
** ========================================================================= **
*/

int				op_swap(t_p *p_a, t_p *p_b, char c, int o);
int				op_push(t_p *p_a, t_p *p_b, char c, int o);
int				op_rotate(t_p *p_a, t_p *p_b, char c, int o);
int				op_revrot(t_p *p_a, t_p *p_b, char c, int o);

int				init_program(char **argv, t_p *p);
void			print_both(t_p a, t_p b);
void			opt_test_swap(t_p *p_a, char c, int o);
void			opt_test_rotate(t_p *p_a, char c, int o);
void			opt_test_revrot(t_p *p_a, char c, int o);

#endif
