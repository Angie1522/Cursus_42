/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 18:06:58 by angcasad          #+#    #+#             */
/*   Updated: 2025/11/28 18:07:01 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <bsd/string.h>

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	dstl;
	size_t	srcl;
	size_t	i;

	i = 0;
	srcl = ft_strlen(src);
	dstl = ft_strlen(dst);
	if(size == 0)
		return(srcl);
	else if(dstl > size)
	{
		return(size + srcl);
	}
	else
		while(src != NULL && src[i] && (dstl + i) < (size - 1))
		{
			dst[dstl + i] = src[i];
			i++;
		}
	dst[dstl + i] = '\0';
	return(dstl + srcl);
}



/*int	main(void)
{
	//char	s[20]= "hey";
	char	d[20]= "ayy";
	//char	s1[20]= "hey";
	char	d1[20]= "ayy";
	printf("%zu\n",ft_strlcat(NULL, NULL,-6));
	printf("%s\n",d);

	printf("%zu\n",strlcat(NULL, NULL, -6));
	printf("%s\n",d1);
	return(0);
}*/