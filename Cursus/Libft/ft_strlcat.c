/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:52:09 by angcasad          #+#    #+#             */
/*   Updated: 2025/11/25 16:58:55 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	lensrc;
	size_t	lendst;

	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	i = 0;
	if(size == 0)
		return(lensrc);
	while(src[i] != '\0' && i < (size - 1))
	{
		printf("%s\n", dst);
		printf("%zu\n", lendst);
		printf("%s\n", src);

		dst[lendst] = src[i];
		i++;
		lendst++;
	}
	dst[i] = '\0';
	return(lendst);
}
int	main(void)
{
	char	s[]= "hey";
	char	d[]= "bro";
	char	s1[]= "hey";
	char	d1[]= "bro";
	printf("%zu\n",ft_strlcat(d,s, 10));
	printf("%s\n",d);

	printf("%zu\n",strlcat(d1,s1, 10));
	printf("%s\n",d1);
	return(0);
}