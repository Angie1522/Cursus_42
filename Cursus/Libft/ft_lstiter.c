/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 17:15:45 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/22 17:32:17 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>


/*void	ft_cosas(void *cosas)
{
	printf("%s\n", (char *)cosas);
}*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if(!lst || !f)
		return;
	while(lst!=NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*int	main(void)
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
	ft_lstiter(a, (&ft_cosas));
	//printf("%s\n", (char *)b->content);
	//ft_lstdelone(b, (&del_content));
	free(covid);
	free(b);
	return(0);
}*/