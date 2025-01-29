#include "push_swap.h"

void	sort_three(t_stack **a)
{
	t_stack	*big;

	big = find_max(*a);
	if (big == *a)
		ra(a, false);
	else if ((*a)->next == big)
		rra(a, false);
	if ((*a)->nbr > (*a)->next->nbr)
		sa(a, false);
}