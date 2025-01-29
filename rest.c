#include "push_swap.h"

t_stack *find_max(t_stack *stack)
{
	long	max_num;
	t_stack *max;

	if (!stack)
		return (NULL);
	max_num = LONG_MIN;
	while (stack)
	{
		if (stack->nbr > max_num)
		{
			max_num = stack->nbr;
			max = stack;
		}
		stack = stack->next;
	}
	return (max);
}
t_stack	find_min(t_stack *stack)
{
	long	min_num;
	t_stack	*min;

	if (!stack)
		return (NULL);
	min_num = LONG_MAX;
	while (stack)
	{
		if (stack->nbr < min_num)
		{
			min_num = stack->nbr;
			min = stack;
		}
	}
	return (min);
}

t_stack	find_last(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

static void	min_on_top(t_stack **a)
{
	while ((*a)->nbr != find_min(*a)->nbr)
	{
		if (find_min(*a)->above_median)
			ra(a, false);
		else
			rra(a, false);
	}
}