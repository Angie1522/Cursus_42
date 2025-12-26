/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 11:35:13 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/10 19:13:02 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
//#include	<stdio.h>
static void	*free_all(char **matrix)
{
	int	i;
	
	i = 0;
	while(matrix[i] != NULL)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
	return(NULL);
}
static size_t	wordcount(char const *s, char c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while(s[i] != '\0')
	{
		while(s[i] != '\0' && s[i] == c)
			i++;
		if(s[i] != '\0' && s[i] != c)
			counter++;
		while(s[i] != '\0' && s[i] != c)
			i++;
	}
	return(counter);
}

static size_t	charcount(char const *s, char c)
{
	size_t	i;
	size_t	final;

	i = 0;
	final = 0;
	
	while(s[i] != '\0' && s[i] == c)
			i++;
		if(s[i] != '\0' && s[i] != c)
		{
			while(s[i] != '\0' && s[i] != c)
			{
				i++;
				final++;
			}
		}
	return(final);
}
char	**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	i;
	size_t	j;
	size_t	n_words;
	size_t	start;
	size_t	len;
	
	if(!s)
		return(NULL);
	i = 0;
	j = 0;
	start = 0;
	n_words = wordcount(s, c) ;
	matrix = malloc((n_words + 1 )* sizeof(char *));
	if(!matrix)
		return(NULL);
	while(i < n_words)
	{	
		while(s[start] == c)
			start++;
		len = charcount((s + start), c);
		matrix[i] = ft_substr(s, start, len);
		if(!matrix[i])
		{
			free_all(matrix);
			return(NULL);
		}
		i++;
		start += len;
	}
	matrix[i] = NULL;
	return(matrix);
}
/*int	main(void)
{
	int	i;
	char	**matrix;
	char	*s;

	s = NULL;
	i = 0;
	matrix = ft_split1(s, ' ');
	if(!matrix)
		return(1);
			//freeall?
	while(matrix[i] != NULL)
	{
		printf("%s\n",matrix[i]);
		i++;
	}
	free_all(matrix);
	return(0);
}*/