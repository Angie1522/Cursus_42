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

char	*nwlst(char *readed)
{
	t_node	*nwlst;

	nwlst = malloc(1 * sizeof(t_node));
	if (!nwlst)
		return(NULL);
	nwlst->content = readed;
	nwlst->next = NULL;
	return(nwlst);
}
