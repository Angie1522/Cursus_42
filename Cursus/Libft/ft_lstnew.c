/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 14:11:02 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/17 14:31:32 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*lstnew;
	
	lstnew = malloc(1 * sizeof(t_list));
	if(!lstnew)
		return(NULL);
	lstnew->content = content;
	lstnew->next = NULL;
	return(lstnew);
}
int	main(void)
{
	t_list	*new;
	int		num;
	
	num = 3;
	new = ft_lstnew(&num);
	printf("%d\n", *(int *)(new->content));
	free(new);
}