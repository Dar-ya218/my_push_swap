/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:16:03 by dabochko          #+#    #+#             */
/*   Updated: 2024/05/09 14:16:16 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/** This function finds the max node in the list and returns a pointer to it
 * It does so by first assigning the min long value to the max, ensuring
 * no node->number will be lower and then proceeds to iterate, updating
 * whenever a larger number is found.
**/
t_stack	*find_max(t_stack *stack)
{
	long	max;
	t_stack	*max_node;

	if (stack == NULL)
		return (NULL);
	max = LONG_MIN;
	while (stack)
	{
		if (stack->number > max)
		{
			max = stack->number;
			max_node = stack;
		}
		stack = stack->next;
	}
	return (max_node);
}
