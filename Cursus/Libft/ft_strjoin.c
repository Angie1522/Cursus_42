/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 13:27:37 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/05 14:30:56 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	//char	*result;
	char	*s1t;
	char	*s2t;
	
	if(s1 == 0)
		return(NULL);
	if(s2 == 0)
		return(NULL);
	s1t = ft_strdup(s1);
	if(!s1t)
		return(NULL);
	s2t = ft_strdup(s2);
	if(!s2t)
	{
		free(s1t);
		return(NULL);
	}
	len = ((ft_strlen(s1)+1) + (ft_strlen(s2)+1));
	ft_strlcat(s1t,s2t,len);
	return(s1t);
}
int	main(void)
{
	char	*res;
	
	res = ft_strjoin("j", "345342AS");
	
	printf("%s\n",res);
	free(res);
}