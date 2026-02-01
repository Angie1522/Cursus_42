/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 11:36:12 by angcasad          #+#    #+#             */
/*   Updated: 2026/01/28 14:12:58 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static t_node	*stash;
	t_node	*new_node;
	char	*readed;
	int		bytes;

	readed = malloc(BUFFER_SIZE * sizeof(char));
	if(!readed)
		return(NULL);
	bytes = read(fd, readed, BUFFER_SIZE);
	if(bytes < 0)
		return(NULL);
	if(bytes > 0)
	{
		new_node = new_txt_node(readed);


	}

	/*1Leer y guardar
		leo con read
		guardo buf en un nodo
		lo añado al final de la lista
		repito operacion hasta que srch_chr(buf) == 1. (1 = \n o read = 0)*/

	/*2Construir la linea
		*/
	
}