/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:33:07 by angcasad          #+#    #+#             */
/*   Updated: 2026/01/15 14:06:22 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	findformat(char format_l, va_list args, int *counter)
{
	if( format_l == 'd' || format_l == 'i' || format_l == 'u')
		return (is_digit(format_l, args, counter));
	
	else if(format_l == 'c' || format_l == 's')
		return (is_alpha(format_l, args, counter));
	else if(format_l == 'x' || format_l == 'X')
		return (is_hexa(format_l, args, counter));
	return(*counter);

}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	if(!str)
		return(counter);
	va_start(args, str);
	while(str[i])
	{
		if(str[i] == '%')
		{
			i++;
			findformat(str[i], args, &counter);
		}
		
		else
		{
			ft_putchar_fd(str[i], 1);
			counter++;
		}
		i++;
	}
	return(counter);
}
#include <stdio.h>

int	main(void)
{
	ft_printf("%x\n", 12);
	printf("%x\n", 12);
	
	


	return(0);
}