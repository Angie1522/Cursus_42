/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 13:34:27 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/29 12:37:05 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	if (!s || !f)
		return (NULL);
	str = malloc((ft_strlen(s)+ 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*char	to_upper_str(unsigned int i, char c)
{
		(void )i;
		return ft_toupper(c);
}
#include <stdio.h>
int	main(void)
{
	char	*str;
	unsigned int	i;
	char	*new_str;

	i = 0;
	str = "hola";
	printf("%s\n", str);
	new_str = ft_strmapi(str, (*(to_upper_str)));
	printf("%s\n", new_str);
	free(new_str);
	return (0);
}*/