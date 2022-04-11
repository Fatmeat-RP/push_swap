#include <push_swap.h>

t_llst *stack_creator(char *avp, int size)
{
	t_llst	*stack;

	stack = atostack(avp, size);
	return (stack);
}