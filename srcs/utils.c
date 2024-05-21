/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:15:32 by dabochko          #+#    #+#             */
/*   Updated: 2024/05/21 12:43:32 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	*join_arguments(char **argv, int argc)
{
	char	*tmp;
	char	*str;
	int		i;

	i = 2;
	str = ft_strdup(argv[1]);
	while (i < argc)
	{
		tmp = ft_strjoin(str, " ");
		free(str);
		str = ft_strjoin(tmp, argv[i]);
		free(tmp);
		i++;
	}
	return (str);
}

long	ft_atol(const char	*str)
{
	size_t	i;
	int		sign;
	long	res;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (sign * res);
}

t_stack	*find_cheapest(t_stack *stack)
{
	t_stack	*cheapest;

	if (stack == NULL)
		return (NULL);
	while (stack)
	{
		if (stack->cheapest == true)
			cheapest = stack;
		stack = stack->next;
	}
	return (cheapest);
}

t_stack	*find_min(t_stack *stack)
{
	long	min;
	t_stack	*smallest;

	if (stack == NULL)
		return (NULL);
	min = LONG_MAX;
	while (stack)
	{
		if (stack->number < min)
		{
			min = stack->number;
			smallest = stack;
		}
		stack = stack->next;
	}
	return (smallest);
}

int	ft_stacksize(t_stack *stack)
{
	int		size;
	t_stack	*tmp;

	size = 0;
	tmp = stack;
	while (tmp)
	{
		size++;
		tmp = tmp->next;
	}
	return (size);
}
