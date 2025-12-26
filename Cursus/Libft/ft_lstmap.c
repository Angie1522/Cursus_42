/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 17:33:38 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/26 16:48:24 by angcasad         ###   ########.fr       */
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
	if (!lst || !f || !del)
		return(NULL);
		
	t_list	*first;
	t_list	*tmp;
	void	*newcontent;

	
	
	first = NULL;
	while(lst != NULL)
	{
		newcontent = f(lst->content);
		if (!newcontent)
		{
			ft_lstclear(&first, del);
			return(NULL);
		}
		tmp = ft_lstnew(newcontent);
		if (!tmp )
		{
			ft_lstclear(&first, del);
			free(newcontent);
			return(NULL);
		}
		ft_lstadd_back(&first, tmp);
		
		lst = lst->next;
	}

	return(first);
}
/*int	main(void)
{
	t_list	delocos;
	t_list	haha;
	t_list	new;
	t_list	*pff;

	delocos.content = "first";
	delocos.next = &haha;
	haha.content = "second";
	haha.next = &new;
	new.content = "meh";
	new.next = NULL;
	
	pff = ft_lstmap(&delocos, wrapper, NULL );
	funcion_mostrarlista(pff);
	ft_lstclear(&pff, free);
}*/