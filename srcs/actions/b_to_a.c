#include "../includes/push_swap.h"

/** This function sets the target node from stack a to the
 * stack b. The target node should be the closest bigger
 * number than the current b node. 
 * If it is not found, it will be set as the smallest number.
**/
void	set_target_b(t_stack *a, t_stack *b)
{
	t_stack	*current_a;
	t_stack	*target;
	long	max;

	while (b)
	{
		max = LONG_MAX;
		current_a = a;
		while (current_a)
		{
			if (current_a->number > b->number
				&& current_a->number < max)
			{
				max = current_a->number;
				target = current_a;
			}
			current_a = current_a->next;
		}
		if (max == LONG_MAX)
			b->target = find_min(a);
		else
			b->target = target;
		b = b->next;
	}
}
