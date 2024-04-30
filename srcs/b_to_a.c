/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:06:13 by dabochko          #+#    #+#             */
/*   Updated: 2024/04/30 16:06:25 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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

/** This Function initiates stack b and sets the required indices, 
 * targets, push cost and the cheapest cost
**/
void	init_stack_b(t_stack **a, t_stack **b)
{
	set_index(*a);
	set_index(*b);
	set_target_b(*a, *b);
	set_push_cost(*a, *b);
	set_cheapest(*b);
}

/** This function pushes the nodes from stack b to stack a by 
 * using the target nodes that we found in the functions above.
**/
void	b_to_a(t_stack **a, t_stack **b)
{
	t_stack	*cheapest;

	cheapest = find_cheapest(*b);
	if (cheapest->target->above_median
		&& cheapest->above_median)
	{
		rev_rotate_both(a, b, cheapest);
	}
	else if (!(cheapest->target->above_median)
		&& !(cheapest->above_median))
	{
		rotate_both(a, b, cheapest);
	}
	target_top_b(b, cheapest);
	target_top_a(a, cheapest->target);
	pa(a, b);
}
