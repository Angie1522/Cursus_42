/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 10:27:56 by angcasad          #+#    #+#             */
/*   Updated: 2026/03/11 13:25:40 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <limits.h>

int ft_atol(char *arg, int *value)
{
	int	index;
	int	negative;
	long	result;

	index = 0;
	result = 0;
	negative = 1;

	if (arg[index] == '-' || arg[index] == '+')
	{
		if (arg[index] == '-')
			negative = negative * -1;
		index++;
	}
	while (arg[index] >= '0' && arg[index] <= '9' )
	{
		result = result * 10;
		result = result + (arg[index] - '0');
		index++;
	}
	result = result * negative;
	if(result > INT_MAX || result < INT_MIN)
		return(write(1, "Error\n", 6), 1);
	*value = (int)result;
	return (0);
}

void free_stack(t_list *stack)
{
	t_list *tmp;

	while (stack)
	{
		tmp = stack;
		stack = stack->next;
		free(tmp->content);
		free (tmp);
	}
	
}
void	free_exit(t_list *stack_a)
{
	free_stack(stack_a);
	exit(EXIT_FAILURE);
}
void	*free_all(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i] != NULL)
	{
		free (matrix[i]);
		i++;
	}
	free (matrix);
	return (NULL);
}
int	checker(t_list **stack_a)
{
	int	i;

	i = 0;
	while(stack_a)
	{
		if(stack_a[i])
		{
			//comprobar si hay dup
		}
		i++;
	}
	return(0);
}
t_list	*init_stack(char **args)
{
	int i;
	int *content;
	t_list *node = NULL;
	t_list	*stack_a = NULL;

	i = 0;
	while(args[i])
	{
		content = malloc(sizeof(int));
			if (!content)
			free_exit(stack_a);
		if (ft_atol(args[i], content))
			free_exit(stack_a);
		node = ft_lstnew(content);
		if (!node)
			free_exit(stack_a);
		ft_lstadd_back(&stack_a, node);
		++i;
	}
	return (stack_a);
}
