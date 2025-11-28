/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 18:10:36 by angcasad          #+#    #+#             */
/*   Updated: 2025/11/28 20:03:09 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmps;
	size_t	i;

	i = 0;
	tmps = (unsigned char *)s;
	
	while (tmps[i] && i < n)
	{

		//me gustas
		if ((unsigned char)tmps[i] == (unsigned char)c)
			return (&tmps[i]);
		i++;
	}
	if(tmps[i] == '\0' && c == '\0')
		return(&tmps[i]);
		
	return (NULL);
}

int	main(void)
{
	const char	s[] = "caca";
	const char	s1[] = "caca";
	const char	*tmpm;
	const char	*tmpm1;
	
	tmpm = ft_memchr(s, 0, 0);
	tmpm1 = memchr(s1, 0, 0);
	printf("%s\n", tmpm);
	printf("%s", tmpm1);
	
}