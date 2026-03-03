/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 16:10:20 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/29 14:07:37 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		x;
	t_list	*temp;

	temp = lst;
	x = 0;
	while (lst != NULL)
	{
		x++;
		if (lst->next == temp)
			break ;
		lst = lst->next;
	}
	return (x);
}
/*#include <stdio.h>

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
	new.next = &delocos;



	printf("%d\n", ft_lstsize(&delocos));
	
	return (0);
}*/