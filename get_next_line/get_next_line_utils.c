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
	if(!s)
		return(NULL);
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

	if (!dest && !src) 
		return (NULL);
	i = 0;
	temp_dest = (unsigned char *) dest;
	temp_src = (unsigned char *) src;
	while (i < n)
	{
		temp_dest[i] = temp_src[i];
		i++;
	}
	return (dest);
}
char	*gnl_strjoin(const char *s1, const char *s2)
{
	size_t	len_1;
	size_t	len_2;
	char	*wrd;
	
	if (!s2)
		return (NULL);
	len_1 = gnl_strlen(s1);
	len_2 = gnl_strlen(s2);
	wrd = malloc((len_1 + len_2 + 1) * sizeof(char));
	if (!wrd)
		return (NULL);
	if(s1 != NULL)
		gnl_memcpy(wrd, s1, len_1);
	gnl_memcpy(wrd + len_1, s2, len_2 + 1);
	return (wrd);
}

char    *gnl_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    size_t  s_len;
    char    *sub;

    if (!s)
        return (NULL);
    s_len = gnl_strlen(s);
   if (start >= s_len)
	{
		sub = malloc(1);
		if (!sub)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}

    if (len > s_len - start)
        len = s_len - start;
    sub = malloc(len + 1);
    if (!sub)
        return (NULL);
    i = 0;
    while (i < len)
    {
        sub[i] = s[start + i];
        i++;
    }
    sub[i] = '\0';
    return (sub);
}
