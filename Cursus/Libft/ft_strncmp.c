/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 15:49:10 by angcasad          #+#    #+#             */
/*   Updated: 2025/11/24 18:40:39 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	i = 0;
	while((s1[i] || s2[i]) && i < n)
	{
		if((s1[i] < s2[i]) || (s1[i] > s2[i]))
			return((int)s1[i] - (int)s2[i]);
		i++;
	}
	return((int)s1[i] - (int)s2[i]);
}
int main(void)
{
	printf("%d\n",ft_strncmp("caca", "cacatua", 4));
	printf("%d\n",strncmp("caca", "cacatua", 4));
	return(0);
}