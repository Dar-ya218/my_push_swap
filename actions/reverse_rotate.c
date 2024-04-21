/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:32:56 by dabochko          #+#    #+#             */
/*   Updated: 2024/04/16 14:32:59 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../includes/push_swap.h"

static void	reverse_rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second_last;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	first = *stack;
	second_last = *stack;
	while (second_last->next->next != NULL)
		second_last = second_last->next;
	second_last->next->next = first;
	*stack = second_last->next;
	second_last->next = NULL;
}