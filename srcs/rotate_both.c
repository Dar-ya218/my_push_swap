#include "../includes/push_swap.h"

void	rotate_both(t_stack **a, t_stack **b, t_stack *target)
{
	while (*a != target->target && *b != target)
		rr(a, b);
	set_index(*a);
	set_index(*b);
}

void	rev_rotate_both(t_stack **a, t_stack **b, t_stack *target)
{
	while (*a != target->target && *b != target)
		rrr(a, b);
	set_index(*a);
	set_index(*b);
}