/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 20:41:21 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/29 14:07:51 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
//#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*m;
	size_t	len;

	len = ft_strlen(s) + 1;
	m = malloc(len * sizeof(char));
	if (!m)
		return (NULL);
	ft_strlcpy(m, s, len);
	return (m);
}
/*int	main(void)
{
	char	*s;
	char	*s1;
	
	s = ft_strdup("abc");
	if (!s)
		return (1);
	s1 = strdup("abc");
	if (!s1)
	{
		free(s);
		return (1);
	}
	printf("%s\n", s);
	printf("%s\n", s1);
	free(s);
	free(s1);
	return (0);

}*/