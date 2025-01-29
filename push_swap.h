#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include <stdlib.h>

typedef struct s_stack
{
	int					nbr;
	int					index;
	int					cost;
	bool				above_median;
	bool				cheap;
	struct s_stack	*target;
	struct s_stack	*next;
	struct s_stack	*prev;
} t_stack;



#endif
