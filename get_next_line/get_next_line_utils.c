/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 11:37:38 by angcasad          #+#    #+#             */
/*   Updated: 2026/02/13 12:36:32 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*gnl_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	return (NULL);
}

size_t	gnl_strlen(const char *c)
{
	size_t	len;

	len = 0;
	if(!c)
		return(len);
	while (c[len] != '\0')
	{
		len++;
	}
	return (len);
}
void	*gnl_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*temp_dest;
	unsigned char	*temp_src;
	size_t			i;

	i = 0;
	temp_dest = (unsigned char *) dest;
	temp_src = (unsigned char *) src;
	if (dest == NULL && src == NULL)
	{
		return (dest);
	}
	while (i < n)
	{
		temp_dest[i] = temp_src[i];
		i++;
	}
	return (dest);
}
char	*gnl_strjoin(const char *s1, const char *s2)
{
	size_t	len;
	size_t	i;
	char	*wrd;
	
	if (!s2)
		return (NULL);
	len = ((gnl_strlen(s1) + gnl_strlen(s2)) + 1);
	wrd = malloc((len) * sizeof(char));
	if (!wrd)
		return (NULL);
	if(s1 != NULL)
		gnl_memcpy(wrd, s1, gnl_strlen(s1));
	i = gnl_strlen(s1);
	gnl_memcpy(&wrd[i], s2, (len - i));
	return (wrd);
}

