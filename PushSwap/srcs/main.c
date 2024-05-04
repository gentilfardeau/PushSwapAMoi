#include "../include/push_swap.h"

void ft_view_stacks(t_node *a, t_node *b)
{
	ft_printf("Nombre de nodes A : %d \n\n", ft_node_count(a));
	ft_print_stack(a);
	ft_printf("A-----\n");
	ft_printf("Nombre de nodes B : %d \n\n", ft_node_count(b));
	ft_print_stack(b);
	ft_printf("B-----\n");
}

	// Pense a secure les fonctions pour un seul element :D ///

int main(int argc, char **argv)
{
	t_node *stack_a = NULL;
	t_node *stack_b = NULL;

	(void)stack_b;
	if (argc <= 1)
		return (0);
	if (ft_parsing(argv, &stack_a) || ft_stack_sorted(stack_a))
		return (ft_error_message());
	ft_print_stack_content(stack_a, "content");
	ft_print_stack_content(stack_a, "next");
	ft_print_stack_content(stack_a, "previous");
	return (0);
}
