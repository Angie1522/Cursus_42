#include <stdio.h>
#include "push_swap.h"

int main (int argc, char **argv)
{
	t_list *stack_a;
	char	**args;
	stack_a = NULL;
	if(argc == 2)
	{
		args = ft_split(argv[1], ' ');

		stack_a = init_stack(args);
		free_all(args);
		free_stack(stack_a);
		return(0);
	}
	if(argc > 2)
	{
		stack_a = init_stack(&(argv[1]));
		return(0);
	}
	return(0);
}