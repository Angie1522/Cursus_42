/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 16:49:29 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/20 17:05:55 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
t_list *ft_lstlast(t_list *lst)
{
	while(lst->next != NULL)
	{
		//printf("%s\n",(char *)lst->content);
		lst = lst->next;
	}
	return(lst);
}

/*int	main(void)
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
	printf("%s\n",(char *)ft_lstlast(&delocos)->content);
	return(0);
}*/