/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:13:31 by dabochko          #+#    #+#             */
/*   Updated: 2024/05/14 14:57:59 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/** Checks whether a stack is already sorted 
 * It iterates through the list and checks whether the 
 * current number is bigger than the next number
**/
int	is_sorted(t_stack **stack)
{
	t_stack	*head;

	head = *stack;
	while (head && head->next)
	{
		if (head->number > head->next->number)
			return (0);
		head = head->next;
	}
	return (1);
}


