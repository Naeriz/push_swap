#include "push_swap.h"

// static void	swap(t_stack **stack)
// {
// 	t_stack **copy;

// 	if (!*stack == NULL || (*stack)->next == NULL)
// 		return ;
// 	if (*stack && (*stack)->next)
// 	{
		*copy->prev = NULL;
		*stack->prev = NULL;
		*copy = *stack;
		*copy->next = *stack->next;
			if (!*copy)
				return ;
		*stack = *copy->next;
		*stack->next = *copy;
		*stack->prev = *stack->next;
		*stack->next = *stack->prev;
	}
}
#include <stdio.h>
#include <stdlib.h>

typedef struct s_stack
{
    int nbr;
    struct s_stack *next;
    struct s_stack *prev;
} t_stack;

static void	swap(t_stack **stack)
{
	t_stack **copy;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	if (*stack && (*stack)->next)
	{
		*copy = (*stack); // copy = 1
			if (!*copy)
				return ;
		*stack = (*copy)->next; // 1 = copy 2
		(*stack)->next = *copy; // 2 = copy 1
		(*stack)->prev = NULL; // prev 2 = 1
		(*stack)->next->next = NULL;
		(*stack)->next->prev = *stack;
	}
}

void    init_stack(t_stack **stack)
{
    t_stack *node;
    t_stack *node_2;

    node = malloc(sizeof(t_stack));
    node_2 = malloc(sizeof(t_stack));
    *stack = node;
    node->next = node_2;
    node->prev = NULL;
    node->nbr = 1;
    node->next->next = NULL;
    node->next->prev = node;
    node->next->nbr = 2;
}


int main() {
    t_stack *stack;

    init_stack(&stack);
    printf("nbr = %d\n", (*stack).nbr);
    printf("nbr = %d\n", (*stack).next->nbr);
    swap(&stack);
    printf("nbr = %d\n", (*stack).nbr);
    printf("nbr = %d\n", (*stack).next->nbr);

    return 0;
}