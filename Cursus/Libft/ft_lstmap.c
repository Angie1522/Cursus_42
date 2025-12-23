/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 17:33:38 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/23 19:39:46 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*wrapper(void *content)
{
	return(ft_strdup((const char *)content));
}
t_list	*newcpylst(void *content, struct s_list *next)
{
	t_list	*lstnew;
	
	lstnew = malloc(1 * sizeof(t_list));
	if(!lstnew)
		return(NULL);
	lstnew->content = content;
	lstnew->next = next;
	return(lstnew);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*tmp;
	
	first = NULL;
	while(lst != NULL)
	{
		write(1, "A\n", 2);
		tmp = ft_lstnew(f(lst->content));
		write(1, "B\n", 2);

		ft_lstadd_back(&first, tmp);
		write(1, "d\n", 2);
		
		lst = lst->next;
	}
		write(1, "c\n", 2);

	return(first);
	
	
}
int	main(void)
{
	t_list	delocos;
	t_list	haha;
	t_list	new;

	delocos.content = "first";
	delocos.next = &haha;
	haha.content = "second";
	haha.next = &new;
	new.content = "meh";
	new.next = NULL;
	
	funcion_mostrarlista(ft_lstmap(&delocos, wrapper, NULL ));
	//usafree
}