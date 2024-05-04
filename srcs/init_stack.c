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