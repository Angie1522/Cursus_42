/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:35:53 by angcasad          #+#    #+#             */
/*   Updated: 2025/11/11 14:18:28 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if (1 == ft_isalpha(c) || 1 == ft_isdigit(c))
	{
		return (1);
	}
	else
		return (0);
}

/*int	main(void)
{
	int c;
	c = ' ';
	printf("%d", ft_isalnum(c));
	return(0);
}*/
