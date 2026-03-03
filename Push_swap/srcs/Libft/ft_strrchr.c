/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 12:40:06 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/29 14:22:38 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>
char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if ((unsigned char)s[len] == (unsigned char)c)
			return ((char *)&s[len]);
		len--;
	}
	return (NULL);
}
/*int main(void)
{
	printf("%s\n",ft_strrchr("abc", 'f'));
	printf("%s\n",strrchr("abc", 'f'));
	return (0);
}*/