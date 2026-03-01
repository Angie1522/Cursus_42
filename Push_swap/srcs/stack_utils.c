t_node	*new_node(int value)//Esta función crea una caja nueva con el dígit dado.
{
    t_node	*node;
    
    node = malloc(sizeof(t_node));
    if(!node)
    	return(NULL);
    node->value = value;
    node->next = NULL;
    return(node);
}

void	add_to_bottom(t_node **stack, int value)
{
    t_node	*new;
    t_node	*current;
    
    new = new_node(value);//crea la caja nueva
    if(!stack)//si la pila esta vacía
    {
        *stack = new;//la caja nueva contiene el top de la pila, osea que la propia pila es el nuevo nodo
        return;
    }
    current = *stack;//empezamos desde el top
    while(current->next != NULL)//hasta llegar al ultimo
    	current = current->next;
    current->next = new;//enganchamos la caja new al final de la pila
}

int	stack_size(t_node *stack)
{
    int	count;
    
    count = 0;
    while(stack!=NULL)//mientras la pila no termine
    {
        count++;
        stack = stack->next;//avanzamos recorriendo la lista nodo a nodo.
    }
    return(count);//devolvemos el tamaño, numero de nodos que tiene nuestra lista.
}