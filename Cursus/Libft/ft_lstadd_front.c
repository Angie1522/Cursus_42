/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 12:27:18 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/29 14:07:37 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*#include <stdio.h>
int	main(void)
{
	t_list	delocos;
	t_list	haha;
	t_list	new;
	t_list	*first;
	
	delocos.content = "first";
	delocos.next = &haha;
	haha.content = "second";
	haha.next = NULL;
	new.content = "meh";
	new.next = NULL;


	first = &delocos;
	//printf("%s\n", (char *)first->content);
	ft_lstadd_front(&first, &new);
	//printf("%s\n", (char *)first->content);
	//printf("%s\n", (char *)new.next->content);

	funcion_mostrarlista(first);
	
	
	return (0);
}*/