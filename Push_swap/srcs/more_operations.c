void	pa(t_node **a, t_node **b)
{
    t_node *tmp;
    
    if(!*b)
    	return;
    tmp = *b;//guardamos el top de b en tmp
    *b = (*b)->next;
    tmp->next = *a;//solucionamos que el antiguo top de b ahora señale al top de a y no al segundo de b. 
    *a = tmp;//ahora guardamos nuestro antiguo top de b modificado en a.
    write(1,"pa\n", 3);
}

void	rotate(t_node **stack)
{
    t_node	*tmp;
    t_node	*last;
    
    if(!*stack || !(*stack)->next)
    	return;
    tmp = *stack;//guardamos el top
    *stack = (*stack)->next;//stack empieza en el 2º
    last = *stack;//guardamos en last el top anterior
    while(last->next != NULL)//avanzamos en last hasta el ultimo nodo de stack
    	last = last->next;
    last->next = tmp;
    tmp->next = NULL;
}

void	ra(t_node **a)
{
    rotate(a);
    write(1,"ra\n",3);
}

void	rb(t_node **b)
{
    rotate(b);
    write(1,"rb\n",3);
}
void	rr(t_node **a, t_node **b)
{
    rotate(a);
    rotate(b);
    write(1,"rr\n",3);
}
    