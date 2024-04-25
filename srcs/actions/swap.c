/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:32:24 by dabochko          #+#    #+#             */
/*   Updated: 2024/04/19 13:17:30 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sa(t_stack **a)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*tmp;

	if (!*a || !(*a)->next)
		return ;
	first = *a;
	second = (*a)->next;
	tmp = second->next;
	*a = second;
	second->next = first;
	first->next = tmp;
	ft_printf("sa\n");
}

void	sb(t_stack **b)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*tmp;

	if (!*b || !(*b)->next)
		return ;
	first = *b;
	second = (*b)->next;
	tmp = second->next;
	*b = second;
	second->next = first;
	first->next = tmp;
	ft_printf("sb\n");
}