/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 10:39:40 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/29 14:16:02 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <bsd/string.h>
//#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	srcl;

	i = 0;
	srcl = ft_strlen(src);
	if (size == 0)
		return (srcl);
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srcl);
}
/*int	main(void)
{
	char	dst1[] = "gf";
	char	src1[] = "jl";
	char	dst[] = "gf";
	char	src[] = "jl";
	
	printf("%zu\n",ft_strlcpy(dst1, src1, 0));
	printf("%s\n", dst1);
	printf("%zu\n",strlcpy(dst, src, 0));
	printf("%s\n", dst);
	return (0);
}*/