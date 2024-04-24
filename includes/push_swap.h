#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <stddef.h>
# include <limits.h>
# include "../libraries/printf/ft_printf.h"
# include "../libraries/libft/libft.h"

typedef struct s_stack
{
	int				number;
	int				index;
	int				push_cost;
	bool			cheapest;
	bool			above_median;
	struct s_stack	*target;
	struct s_stack	*next;
}	t_stack;

/* actions */
void	pa(t_stack **a, t_stack **b); //Toma el primer elemento de la pila b y lo pone en la parte superior de la pila a.
void	pb(t_stack **a, t_stack **b); //Toma el primer elemento de la pila a y lo pone en la parte superior de la pila b.

void	rrr(t_stack **a, t_stack **b); //  Estas funciones rotan las pilas hacia la derecha (el último elemento se convierte en el primero).
void	rrb(t_stack **b); //  Estas funciones intercambian los dos primeros elementos de las pilas.
void	rra(t_stack **a); //  Estas funciones rotan las pilas hacia la izquierda (el primer elemento se convierte en el último).

void	rr(t_stack **a, t_stack **b);
void	rb(t_stack **b);
void	ra(t_stack **a);

void	sb(t_stack **b);
void	sa(t_stack **a);

void	rotate_both(t_stack **a, t_stack **b, t_stack *target);
void	rev_rotate_both(t_stack **a, t_stack **b, t_stack *target);
void	target_top_a(t_stack **a, t_stack *target);
void	target_top_b(t_stack **b, t_stack *target);
void	min_to_top(t_stack **a);