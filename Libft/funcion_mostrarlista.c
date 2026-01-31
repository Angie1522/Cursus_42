/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcion_mostrarlista.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 15:19:40 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/20 16:07:10 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	funcion_mostrarlista(t_list *lista)
{
	//quitar de la entrega y la libft y make
	while(lista != NULL)
	{
		printf("%s\n", (char *)lista->content);
		lista = lista->next;
	}
}