/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:33:07 by angcasad          #+#    #+#             */
/*   Updated: 2026/01/12 14:49:02 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

int	main(void)
{
	ft_printf("hola %c tienes %d", 'A', 12); //no imprime la A
	return(0);
}