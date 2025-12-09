/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 17:46:43 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/09 15:03:06 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
size_t	ft_counter(char const *s, char c)
{
	size_t	count;
	int	i;
	
	count = 0;
	i = 0;
	while(s[i])
	{
		if(s[i] == c)
			count++;
		i++;
	}
	return(count + 1);
}
void	*free_all(char **strf, int i)
{
	while(!strf)
	{
		free(strf[i]);
			i--;
	}
	free(strf);
	return(NULL);
}
char	**ft_split(char const *s, char c)
{
	size_t	size;
	size_t	start;
	size_t	len;
	size_t	i;
	size_t	n_obj;
	char	**matrix;
	i = 0;
	size = ft_strlen(s);
	start = 0;
	n_obj = ft_counter(s,c);
	matrix = malloc((n_obj + 1) * sizeof(char*));
	if(!matrix)
		return(NULL);
	while(i < n_obj)
	{
		//len = ft_strlen(s + start) - ft_strlen(ft_strchr((s + start),c));
		len = ft_strlen(s + start) - ft_strlen(ft_strchr((s + start),c));
		//printf("%s\n", s + start);
		//printf("%zu\n", start);

		matrix[i] = ft_substr(s,start,len);
			if(!&matrix[i])
				free_all(matrix, i);
		start = start + (len + 1);
		i++;
	}
	matrix[n_obj] = NULL;
	return(matrix);
}

int	main(void)
{
	char	*s;
	char	**matrix;
	char	c;
	int	i;
	
	i = 0;
	c = ' ';
	s = "no va a funcionar";
	matrix = ft_split(s, c);
	if(!matrix)
		return(1);
	while(matrix[i] != NULL)
	{
		printf("%s\n", matrix[i]);
		i++;
	}
	free_all(matrix, i);
	return(0);
}