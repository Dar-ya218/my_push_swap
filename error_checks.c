/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:47:36 by dabochko          #+#    #+#             */
/*   Updated: 2024/04/15 15:53:42 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "../includes/push_swap.h"

/**
 * This function checks for duplicates by iterating through
 * our linked list and updating a counter anytime a number
 * matches the tmp list (comparing against itself)
**/
int	check_duplicates(t_stack *a)
{
	t_stack	*tmp;
	int		check;

	check = 0;
	while (a != NULL)
	{
		tmp = a;
		check = 0;
		while (tmp != NULL)
		{
			if (tmp->number == a->number)
				check++;
			tmp = tmp->next;
		}
		if (check > 1)
			return (1);
		a = a->next;
	}
	return (0);
}

/** This function checks whether the input string only contains
 * valid characters (signs or numbers), and no other unwanted chars.
**/
int	is_number(const char *str)
{
	if ((*str) == '\0')
		return (0);
	if ((*str) == '+' || (*str) == '-')
	{
		if (ft_strlen(str) == 1)
			return (0);
		str++;
	}
	while (*str)
	{
		if ((*str) < '0' || (*str) > '9')
			return (0);
		str++;
	}
	return (1);
}

/** This function checks whether the 
 * current number is less than the maximum integer
**/
int	valid_int(char *s)
{
	long	nbr;

	nbr = ft_atol(s);
	if (nbr >= INT_MIN && nbr <= INT_MAX)
		return (1);
	return (0);
}