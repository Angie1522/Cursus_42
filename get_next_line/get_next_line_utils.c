/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 11:37:38 by angcasad          #+#    #+#             */
/*   Updated: 2026/01/28 13:50:50 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_node	*new_txt_node(char *readed)
{
	t_node	*nwnode;

	nwnode = malloc(1 * sizeof(t_node));
	if (!nwnode)
		return(NULL);
	nwnode->content = readed;
	nwnode->next = NULL;
	return(nwnode);
}

t_list	*lstlast(t_list *already_readed)
{
	if (!already_readed)
		return (NULL);
	while (already_readed->next != NULL)
	{
		already_readed = already_readed->next;
	}
	return (already_readed);
}

void	lstadd_back(t_list **already_readed, t_list *new_readed)
{
	if (!already_readed || !new_readed)
		return ;
	if (*already_readed == NULL)
		*already_readed = new_readed;
	else
		lstlast(*already_readed)->next = new_readed;
}

void	lstclear(t_list **already_readed, void (*del)(void*))
{
	t_list	*printed;

	if (!already_readed || !del)
		return ;
	while (*already_readed != NULL)
	{
		printed = *already_readed;
		del((*already_readed)->content);
		*already_readed = (*already_readed)->next;
		free (printed);
	}
	already_readed = NULL;
}

