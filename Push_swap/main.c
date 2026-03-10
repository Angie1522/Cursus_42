#include <stdio.h>
#include "push_swap.h"

int main (int argc, char **argv)
{
	t_list *stack_a;
	
	stack_a = NULL;
	if(argc == 2)
	{
		init_stack(ft_split(argv[1], ' '), stack_a);
		return(0);
	}
	if(argc > 2)
	{
		init_stack(&(argv[1]), stack_a);
		return(0);
	}
	printf("Todo correcto\n");
	return(0);
}