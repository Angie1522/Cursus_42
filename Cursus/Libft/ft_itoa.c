/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:17:51 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/15 16:26:04 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_numb_count(int n)
{
	int	x;
	int	neg;

	x = 0;
	if(n < 0)
	{
		neg = -1;
		n = n * neg;
		x++;
	}
	while(n > 9)
	{
		n = n / 10;
		x++;
	}
	if(n <= 9)
		return(x + 1);
	return(x + 1);
}
void	ft_changer(int n, int *i, char *str)
{
	if(n > 9)
	{
		ft_changer(n / 10, i, str);
	}
	
	str[*i] = n % 10 + '0';
	
	(*i)++;
	return;
}
char	*ft_itoa(int n)
{
	int	i;
	char	*str;
	int	nc;
	int	neg;

	neg = -1;
	
	nc = ft_numb_count(n);
	str = malloc((nc + 1) * sizeof(char));
		if(!str)
			return(NULL);
	i = 0;
	if(n == -2147483648)
	{
		str = "-2147483648";
		return(str);
	}
	if(n < 0)
	{
		n = n * neg;
		i++;
		str[0] = '-';
	}
	/*if(n <= 9)
	str[i] = n + '0';*/
	ft_changer(n, &i, str);	
	str[nc] = '\0';
	return(str);
}
int	main(void)
{
	char	*str;
	
	str = ft_itoa(-2147483648);
	printf("%s\n",str);
	free(str);
}