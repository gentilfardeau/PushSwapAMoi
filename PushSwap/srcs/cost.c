#include "../include/push_swap.h"

int ft_cost_affect(t_node *stack_a;)
{
	int cost;

	cost = target_pos + actual_pos;
}

int ft_cost_node(t_node **stack_a)
{

	if (!stack_a)
		return (1);
	while (stack_a != NULL)
	{
		stack_a->cost = ft_cost_affect(stack_a);
		stack_a = stack_a->next;
	}
	return (0);
}