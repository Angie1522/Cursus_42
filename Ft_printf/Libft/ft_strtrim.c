/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 21:24:41 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/29 14:07:51 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*new;
	size_t			end;
	size_t			len;
	unsigned int	start;	

	start = 0;
	end = ft_strlen(s1);
	if (s1 == NULL || set == NULL)
		return (NULL);
	if (set[0] == '\0')
		return (ft_substr(s1, start, ft_strlen(s1)));
	while (ft_strchr(set, s1[start]) != NULL)
		start++;
	while (ft_strrchr(set, s1[end]) != NULL)
		end--;
	len = (end - start + 1);
	new = ft_substr(s1, start, len);
	return (new);
}

/*int	main(void)
{
	char	*s;
	char	*set;
	char	*g;
	
	s = "abcd";
	set="";
	g = ft_strtrim("xxxz  test with x and z and xz.  zx  xx z", "z x");
	if (!g)
		return (1);
	printf("%s\n",g);
	free(g);
}*/