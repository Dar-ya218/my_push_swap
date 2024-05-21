/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:04:03 by dabochko          #+#    #+#             */
/*   Updated: 2024/05/21 12:20:11 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_array(char **str)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	free_stack(t_stack *stack)
{
	t_stack	*head;
	t_stack	*tmp;

	head = stack;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
