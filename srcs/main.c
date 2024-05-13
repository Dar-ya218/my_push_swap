/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:54:35 by dabochko          #+#    #+#             */
/*   Updated: 2024/05/13 13:29:28 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_swap(t_stack **a, t_stack **b)
{
	int	length_a;

	length_a = ft_stacksize(*a);
	if (is_sorted(a))
		return ;
	else if (length_a <= 3)
		sort3(a);
	else
		big_sort(a, b);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	*str;

	if (argc >= 2)
	{
		a = NULL;
		b = NULL;
		str = join_arguments(argv, argc);
		if (check_input(&a, str) == 0)
		{
			ft_putstr_fd("Error\n", 2);
			free(str);
			exit(1);
		}
		push_swap(&a, &b);
		free_stack(a);
		free(str);
	}
	return (0);
}