/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 11:37:33 by angcasad          #+#    #+#             */
/*   Updated: 2026/02/13 14:22:18 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include	<fcntl.h>
#include	<stdio.h>
#include	<unistd.h>
#include	<stdlib.h>

#ifndef	BUFFER_SIZE
#define	BUFFER_SIZE	1

#endif
char	*read_fd(int fd, char *box);
char	*get_next_line(int fd);
char	*gnl_strjoin(const char *s1, const char *s2);
void	*gnl_memcpy(void *dest, const void *src, size_t n);
size_t	gnl_strlen(const char *c);
char	*gnl_strchr(const char *s, int c);


#endif