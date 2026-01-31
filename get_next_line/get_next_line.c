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
	static char	*readed;
	char	buffer[BUFFER_SIZE + 1];
	char	*complete_line;
	size_t	bytes;
	
	//if(error de 0)
	while()
	bytes = read(fd, buffer, BUFFER_SIZE);
	buffer[bytes] = '\0';
	
	while(bytes > 0)
	{
		
		
		nwlst(buffer);
	}
	

	
	
}