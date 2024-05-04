#include "../include/push_swap.h"

// Gere la gestion des mouvements
// int ft_operate(t_node **stack_a, t_node **stack_b)
//{
// return (1);
//}

// Synthetise et assemble le tri, et renvoie le nombre de moves
// Prend en compte : l'affectations du poids, de l'index final et des mouvements

int ft_mini_sort(t_node *s_a)
{
	ft_print_stack_content(s_a, "next");
	return (0);
}

int ft_sorting(t_node *stack_a, t_node *stack_b)
{
	if (ft_stack_len(stack_a) == 3)
		ft_mini_sort(stack_a);
	(void)stack_b;
	return (0);
}