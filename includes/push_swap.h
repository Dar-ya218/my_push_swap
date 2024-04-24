#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <stddef.h>
# include <limits.h>
# include "../libraries/printf/ft_printf.h"
# include "../libraries/libft/libft.h"

typedef struct s_stack
{
	int				number;
	int				index;
	int				push_cost;
	bool			cheapest;
	bool			above_median;
	struct s_stack	*target;
	struct s_stack	*next;
}	t_stack;