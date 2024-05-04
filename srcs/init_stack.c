#include "../includes/push_swap.h"

/** This function converts the argv into a linked list/stack.
 * It extracts the numbers and converts them to integers.
 * Then it creates a new node which stores the number and adds it to the back.
**/
void	init_stack_a(t_stack **a, char **str)
{
	t_stack	*new;
	int		i;
	long	nbr;

	i = 0;
	while (str[i])
	{
		nbr = ft_atol(str[i]);
		new = ft_stacknew(nbr);
		ft_stackadd_back(a, new);
		i++;
	}
}

/** This function finds the cheapest node by comparing push_cost for each node.
 * It uses the maximum as a starting point for comparison.
**/
void	set_cheapest(t_stack *stack)
{
	long	min;
	t_stack	*cheapest;

	if (stack == NULL)
		return ;
	min = LONG_MAX;
	while (stack)
	{
		if (stack->push_cost < min)
		{
			min = stack->push_cost;
			cheapest = stack;
		}
		stack->cheapest = false;
		stack = stack->next;
	}
	cheapest->cheapest = true;
}
