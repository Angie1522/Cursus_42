/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 15:28:44 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/02 17:15:58 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <bsd/string.h>


char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int	n;
	i = 0;
	
	n = ft_strlen(little);
	if(little[i] == '\0')
		return((char *)&big[i]);
	
	while(big[i] && n + i <= len)
	{
		if(ft_strncmp(&big[i], little, n) == 0)
			return((char *)&big[i]);
		i++;
	}
		
	return(NULL);
}
/*int	main(void)
{
	const char *largestring = "F";
    const char *smallstring = "F";
    char *ptr;
	char *ptr1;

    ptr = ft_strnstr(largestring, smallstring, 1);
    ptr1 = strnstr(largestring, smallstring, 1);

	printf("%s\n", ptr);
	printf("%s", ptr1);
	


}*/