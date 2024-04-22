/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:32:07 by dabochko          #+#    #+#             */
/*   Updated: 2024/04/16 14:32:13 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../includes/push_swap.h"

static void	rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*lastnode;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	first = *stack;
	second = (*stack)->next;
	lastnode = ft_stacklast(*stack);
	*stack = second;
	lastnode->next = first;
	first->next = NULL;
}
