/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 12:40:06 by angcasad          #+#    #+#             */
/*   Updated: 2025/11/24 18:41:47 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	len = ft_strlen(s);
		
	while(s[len] >= 0)
	{	
		//write(1,"a\n",2);
		if((unsigned char)s[len] == (unsigned char)c)
			return((char *)&s[len]);
		len--;
	}
	/*if(s[i] == (unsigned char)c)
		return((char *)&s[i]);*/
	return(NULL);
}
int main(void)
{
	printf("%s\n",ft_strrchr("abc", 'f'));
	printf("%s\n",strrchr("abc", 'f'));
	return(0);
}