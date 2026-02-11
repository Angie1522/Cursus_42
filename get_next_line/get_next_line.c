/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 11:36:12 by angcasad          #+#    #+#             */
/*   Updated: 2026/02/11 13:16:31 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//funcion que lee y va guardando en un buffer
//funcion que va analizando ese buffer en busca de '\n'
//si encuentra el salto, copia en el que va a imprimir y guarda lo sobrante en static
#include "get_next_line.h"
char	*readed_from_fd(int fd, char *box)
{
	char	*temp_box;
	int		read_bytes;

	
}
//read = 0 se acabo, 1 o mas, lee, -1 error.
char	*get_next_line(int fd)
{
	static char	*box;
	char		*readed;
	
	if(fd < 0 || BUFFER_SIZE <= 0)
		return(NULL);
	
	
	
}