#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
    int            value;
    struct s_node  *next;
}   t_node;

// stack_utils.c
t_node  *new_node(int value);
void    add_to_bottom(t_node **stack, int value);
int     stack_size(t_node *stack);

#endif