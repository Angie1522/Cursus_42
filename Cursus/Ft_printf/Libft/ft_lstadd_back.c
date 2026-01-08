/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 17:06:51 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/29 14:07:37 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}
/*int	main(void)
{
	t_list	delocos;
	t_list	haha;
	t_list	new;
	
	t_list	*first;
	t_list	*nada;
	
	delocos.content = "first";
	delocos.next = &haha;
	haha.content = "second";
	haha.next = NULL;
	
	new.content = "meh";
	new.next = NULL;
	
	first = &delocos;

	nada = NULL;

	funcion_mostrarlista(first);

	ft_lstadd_back(&first, &new);
	
	ft_lstadd_back(NULL, &new);
	
	ft_lstadd_back(&first, NULL);
	
	ft_lstadd_back(&nada, &new);

	funcion_mostrarlista(first);
	funcion_mostrarlista(nada);
	
	return (0);
}*/