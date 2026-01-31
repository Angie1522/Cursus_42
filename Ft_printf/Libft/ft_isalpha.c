/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:37:22 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/29 14:07:37 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

/**
 * @brief Checks if character passed as parameter is alphabetical
 * 
 * @param c 
 * @return int 
 */
int	ft_isalpha(int c)
{
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
	{
		return (0);
	}
	else
		return (1);
}
/*
int	main(void)
{
	char x;
	x = 'w';
	printf("%d", ft_isalpha(x));
	return (0);
}
*/
