/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 17:33:38 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/29 14:07:37 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*tmp;
	void	*newcontent;

	if (!lst || !f || !del)
		return (NULL);
	first = NULL;
	while (lst != NULL)
	{
		newcontent = f(lst->content);
		if (!newcontent)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		tmp = ft_lstnew(newcontent);
		if (!tmp)
		{
			ft_lstclear(&first, del);
			return (free(newcontent), NULL);
		}
		ft_lstadd_back(&first, tmp);
		lst = lst->next;
	}
	return (first);
}
/*#include <stdio.h>

int	main(void)
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
}
void	*wrapper(void *content)
{
	return (ft_strdup((const char *)content));
}*/