/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 21:44:21 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/05 01:28:26 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	int	i;
	char	*m;
	unsigned int	wlen;

	if (!s || len == 0)
		return (NULL);
	i = 0;
	wlen = ft_strlen(s);
	if( start > wlen )
		return(NULL);
	m = malloc((len + 1) * sizeof(char));
	if (!m)
		return (NULL);
	ft_strlcpy (&m[i], &s[start], len + 1);
	return (m);
}
int	main(void)
{
	char	*s;
	char	*ss;
	
	s = "ABC";
	ss = ft_substr(s,2,0);
	if(!ss)
		return(1);
	
	printf("%s\n", ss);
	free(ss);	
}