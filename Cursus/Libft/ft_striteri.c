/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:43:17 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/16 15:11:39 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if(!s)
		return;
	while(s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*void	to_upper_str(unsigned int i, char *c)
{
		(void )i;
		*c = ft_toupper(*c);
		return;
}
	
int	main(void)
{
	char	str[] = "hola";
	unsigned int	i;

	i = 0;
	
	printf("%s\n", str);
	ft_striteri(str, (*(to_upper_str)));
	printf("%s\n", str);
	return (0);
}*/