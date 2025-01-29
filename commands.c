#include "push_swap.h"

static void	push(t_stack **dst, t_stack **src)
{
	t_stack	*pusher;

	if (!*src)
		return ;
	pusher = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	pusher->prev = NULL;
	if (!*dst)
	{
		*dst = pusher;
		pusher->next = NULL;
	}
	else
	pusher->next = *dst;
	pusher->next->prev = pusher;
	*dst = pusher;
}

void	pa(t_stack **a, t_stack **b, bool print)
{
	push(a, b);
	if (!print)
		ft_printf("pa\n");
}

void	pb(t_stack **a, t_stack **b, bool print)
{
	push(b, a);
	if (!print)
		ft_printf("pb\n");
}