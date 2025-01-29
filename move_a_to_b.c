#include "push_swap.h"

static void move_a_to_b(t_stack **a, t_stack **b)
{
	t_stack	*cheapest;

	cheapest = get_cheapest(*a);
	if (cheapest->above_median && cheapest->target->above_median)
		rotate_both(a, b);
	else if (!(cheapest->above_median)
		&& !(cheapest->target->above_median))
		rev_rotate_both(a, b, cheapest);
	prep_for_push(a, cheapest, 'a');
	prep_for_push(b, cheapest->target, 'b');
	pb(b, a , false);
}
