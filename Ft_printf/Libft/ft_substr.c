/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 21:44:21 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/29 14:07:51 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*m;
	unsigned int	wlen;

	if (!s)
		return (NULL);
	if (len == 0)
		return (ft_strdup(""));
	wlen = ft_strlen(s);
	if (start >= wlen)
		return (ft_strdup(""));
	if (len > (wlen - start))
		len = (wlen - start);
	m = malloc((len + 1) * sizeof(char));
	if (!m)
		return (NULL);
	ft_strlcpy(m, &s[start], (len + 1));
	return (m);
}
/*
#include <stdio.h>
int	main(void)
{
	
	char	*ss;
	
	ss = ft_substr("hola respira", 3, 18446744073709551615);
	if (!ss)
		return (1);
	
	printf("%s\n", ss);
	free(ss);	
}*/