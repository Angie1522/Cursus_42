/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 11:36:12 by angcasad          #+#    #+#             */
/*   Updated: 2026/02/13 14:24:13 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//funcion que lee y va guardando en un buffer
//funcion que va analizando ese buffer en busca de '\n'
//si encuentra el salto, copia en el que va a imprimir y guarda lo sobrante en static
#include "get_next_line.h"
char	*read_fd(int fd, char *box)
{
	char	*temp_box;
	int		read_bytes;

	temp_box = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if(!temp_box)
		return(NULL);
	read_bytes = read(fd, temp_box, BUFFER_SIZE);
	if(read_bytes < 0)
		return(NULL);
	temp_box[read_bytes] = '\0';
	while())
	{
		box = gnl_strjoin(box, temp_box);
		if(!box)
			return(NULL);
		read_bytes = read(fd, temp_box, BUFFER_SIZE);
		if(read_bytes == 0)
		{	
			free(temp_box);
			return(box);
		}
		temp_box[read_bytes] = '\0';
	}
	free(temp_box);
	return(box); 
}
//read = 0 se acabo, 1 o mas, lee, -1 error.
char	*get_next_line(int fd)
{
	static char	*box;

	/*box = malloc(sizeof(char) * BUFFER_SIZE);
	if(!box)
		return(NULL);*/

	
	
	if(fd < 0 || BUFFER_SIZE <= 0)
		return(NULL);
		
	box = read_fd(fd, box);
	if(!box)
		return(NULL);
	return(box);
	
}