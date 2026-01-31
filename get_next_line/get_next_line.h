/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 11:37:33 by angcasad          #+#    #+#             */
/*   Updated: 2026/01/28 14:01:23 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE.H
#  define GET_NEXT_LINE.H

#include	<fcntl.h>
#include	<stdio.h>
#include	<unistd.h>
#include	<stdio.h>

#ifndef	BUFFER_SIZE
#define	BUFFER_SIZE	10

#endif
typedef	struct s_node
{
	char	*content;
	struct s_node	*next;	
} t_node;

char	*nwlst(char *readed);



#endif