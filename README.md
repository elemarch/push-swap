# push_swap (en)

Here is my push_swap (2015 version), 103 / 100.

**Here, I will explain my algorithm, what fails and what does not. Every function is explained into the push_swap.h file.**

## Main Algorithm (pile_sort.c > sort_default)

My main algorithm is (too ?) simple, it just works. I got about 500k operations for an unordered pile with 2000 numbers (it's too many for the last point of the correction).

It uses two variables, plus our two piles. Those variables are b, which will contains the minimum value found in the pile, and pos, which will be the position of this value.

	1) while the pile contains more than 3 values
		1.1) we define b and pos.
		1.2.a) if b is at the top of the A pile, push it into B pile.
		1.2.b) else, if pos is after the middle of the pile, rotate A pile.
		1.2.c) else, reverse rotate A pile.
	2) sort the three last numbers in A pile thanks to a special case function (see below)
	3) empty B pile into A pile
	4) check if the pile is sorted. else, re-do !

## Special case functions

I had to wrote some "special case functions" to fill the requirements of the correction.

case_three
	
	1) first we detect the shape (there are 6 possible results)
	2) depending on the result we apply one or two operations
	3) ta-dah ! the pile is sorted

case_two
	
	just a swap if needed, not that much complicated.

case_beg
	
	if only the two first numbers are not correct (2 1 3 4 5), gives the best operations possible

a little if if you got only the top of the pile inverted.


# push_swap (fr)

Ce dossier contient mon push_swap (version 2015), pas encore corrigé.

**Ici, j'expliquerais mon algorithme, ses points forts et ses points faibles. Autrement, chaque fonction (sauf les statiques) est expliquée dans le push_swap.h**

## Algorithme principal (pile_sort.c > sort_default)

Mon algorithme est (trop ?) simple, mais il fonctionne. J'ai environ 500k opérations pour une pile non-triée de 2000 nombres (c'est malheureusement trop pour le dernier point de la correction)

Il utilise deux variables, plus nos deux piles. Ces variables sont b, qui contiant la plus petite valeur de la pile, et pos, qui sera la position de cette valeur dans la pile.

	1) tant que la pile contient plus de 3 valeurs
		1.1) on définit b et pos.
		1.2.a) si b est en haut de la pile A, on le push dans la pile B.
		1.2.b) sinon, is la position de b est après le milieu de la pile, on rotate la pile A.
		1.2.c) sinon, on reverse rotate la pile A.
	2) on trie les trois nombres restants dans la pile A grâce à une fonction pour cas particulier
	3) on vide la pile B dans la pile A
	4) si la pile est toujours pas triée, on recommence

## fonctions pour cas particulier

J'ai du écrire quelques "fonctions pour cas particulier" pour gagner des points pour la correction.

case_three
	
	1) on détecte la forme (6 cas possibles)
	2) en fonction du résultat on applique une ou deux oprérations
	3) ta-dah ! la pile est triée !

case_two
	
	juste un swap si besoin, c'est pas compliqué

case_beg
	
	si seulement les premiers sont inversés (2 1 3 4 5), on applique la meilleure suite d'opérations

un petit if si seulement le haut de la pile est inversée.
