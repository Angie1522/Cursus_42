/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 17:06:51 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/20 17:17:38 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstadd_back(t_list **lst, t_list *new)
{
	ft_lstlast(*lst)->next = new;

	///////////// o //////////////////
	
	/*t_list *last = ft_lstlast(*lst);
	last->next = new;*/

}