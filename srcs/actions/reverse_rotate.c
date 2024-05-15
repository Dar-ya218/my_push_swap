/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:32:56 by dabochko          #+#    #+#             */
/*   Updated: 2024/05/15 15:19:54 by dabochko         ###   ########.fr       */
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

void	rra(t_stack **a)
{
	reverse_rotate(a);
	ft_printf("rra\n");
}

void	rrb(t_stack **b)
{
	reverse_rotate(b);
	ft_printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_printf("rrr\n");
}