/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 13:27:37 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/06 20:48:18 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	char	*wrd;
	
	if(s1 == 0)
		return(NULL);
	if(s2 == 0)
		return(NULL);
	len = ((ft_strlen(s1)) + (ft_strlen(s2)) + 1);
	wrd = malloc((len ) * sizeof(char));
	if(!wrd)
		return(NULL);
	ft_memcpy(wrd, s1, len);
	i = ft_strlen(s1);
	ft_memcpy(&wrd[i], s2, (len - i));
	return(wrd);
}
/*int	main(void)
{
	char	*res;
	
	res = ft_strjoin("NULL", "HOLA");
	
	printf("%s\n",res);
	free(res);
}*/