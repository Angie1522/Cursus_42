#ifndef PUSH_SWAP_H//si push swap no esta definido... (evita que el archivo se incluya dos veces)
# define PUSH_SWAP_H//...incluyelo ahora.(la proxima vez que alguien intente incluir el header ya esta definido y no lo procesa dos veces.)

# include <stdlib.h>//para poder usar malloc y free
# include <unistd.h>//para poder usar write
# include "srcs/Libft/libft.h"

typedef struct s_node//nuestra estructura para crear nodos
{
    int            value;
    struct s_node  *next;
}   t_node;

// stack_utils.c
t_node  *new_node(int value);
int	join_args(int argc, char **argv, t_node *aux);
int	join_simple(char **argv, t_node *aux);
void    add_to_bottom(t_node **stack, int value);
int     stack_size(t_node *stack);
int	duplicate(int argc, char **argv);
int	atoi_push(const char *ptr);

int init_stack(char **args, t_list *stack_a);

#endif//cierra el ifndef. Las tres líneas juntas se llaman include guard.