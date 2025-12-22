/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 12:16:26 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/22 17:12:46 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*void	del_content(void *lst)
{
	t_list	*tmp;
	tmp = (t_list*)lst;
	free(tmp->content);
	//free(lst->next);
}*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	//del = free;
	if (!lst)
		return;
	del(lst->content);
	free(lst);
}



/*#include <stdio.h>
int	main(void)
{
	t_list	delocos;
	t_list	haha;
	t_list	new;
	char *gripe = ft_strdup("caca");
	char *covid = ft_strdup("bigcaca");
	
	
t_list	* a = ft_lstnew(gripe);
t_list	* b = ft_lstnew(covid);

	a->next=b;



	//funcion_mostrarlista(&delocos);
	ft_lstdelone(a, (&del_content));
	printf("%s\n", (char *)b->content);
	//ft_lstdelone(b, (&del_content));
	free(covid);
	free(b);
	return(0);
}*/