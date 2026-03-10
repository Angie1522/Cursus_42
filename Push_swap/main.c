#include <stdio.h>
#include "push_swap.h"

int main (int argc, char **argv)
{
	atoi_push(argv[1]);
	error(argc, argv);
	ft_split(argv[1], ' ');
	printf("Todo correcto\n");
	return(0);
}