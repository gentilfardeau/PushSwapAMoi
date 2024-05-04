#include "../include/push_swap.h"

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
	ft_printf("Stack length : %d \n", ft_stack_len(stack_a));
	ft_target_init(stack_a);
	ft_current_affect(stack_a);
	ft_print_stack_content(stack_a, "current_pos");
	ft_print_stack_content(stack_a, "target_pos");
	ft_sorting(stack_a, stack_b);
	return (0);
}
