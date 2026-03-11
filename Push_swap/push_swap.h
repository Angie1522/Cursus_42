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
void	*free_all(char **matrix);

void free_stack(t_list *stack);
void	free_exit(t_list *stack_a);
int ft_atol(char *arg, int *value);
t_list  *init_stack(char **args);

#endif//cierra el ifndef. Las tres líneas juntas se llaman include guard.