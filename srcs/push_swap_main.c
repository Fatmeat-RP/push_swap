#include <push_swap.h>

int	main(int ac, char **av)
{
	t_args	*arg;
	t_stack	*stack_a;
	t_stack	*stack_b;

	arg = parse_all_args(ac, av);
	check_arg(arg);
	stack_a = push_arg_to_stack(arg);
	sorting(stack_a, stack_b);
	return (0);
}