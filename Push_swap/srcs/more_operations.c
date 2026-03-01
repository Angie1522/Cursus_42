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