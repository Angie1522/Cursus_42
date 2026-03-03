/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 15:54:13 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/29 14:07:37 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		tmp = *lst;
		del((*lst)->content);
		*lst = (*lst)->next;
		free (tmp);
	}
	lst = NULL;
}
/*void	del_content(void *lst)
{
	t_list	*tmp;
	tmp = (t_list*)lst;
	free(tmp->content);
	//free(lst->next);
}*/
/*#include <stdio.h>
int	main(void)
{
	t_list	**mama;
	
	char *gripe = ft_strdup("caca");
	char *covid = ft_strdup("bigcaca");
	char *catarro = ft_strdup("daddycaca");
	
	
	t_list	* a = ft_lstnew(gripe);
	t_list	* b = ft_lstnew(covid);
	t_list	* c = ft_lstnew(catarro);
	mama = &a;


	a->next=b;
	b->next=c;



	//funcion_mostrarlista(&delocos);
	printf("%s\n", (char *)b->content);

	ft_lstclear(mama, (&del_content));
	//printf("%s\n", (char *)b->content);
	//ft_lstdelone(b, (&del_content));
	return (0);
}*/