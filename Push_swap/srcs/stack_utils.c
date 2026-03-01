t_node	*new_node(int value)
{
    t_node	*node;
    
    node = malloc(sizeof(t_node));
    if(!node)
    	return(NULL);
    node->value = value;
    node->next = NULL;
    return(node);
}

void	add_back(t_node **stack, t_node *next)
{
    if(!stack || !next)
    	return;
    if(*stack == NULL)
    	*stack = new;
    else
    	while(stack->next != NULL)
        	stack = stack->next;
        return(stack);
}