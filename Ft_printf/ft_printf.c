/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:33:07 by angcasad          #+#    #+#             */
/*   Updated: 2026/01/17 17:53:11 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_digit(long n)
{
	int	len;

	len = 0;
	if (n == 0)
	{
		len++;
		return (len);
	}
	if (n < 0)
	{
		len++;
		n = n * (-1);
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	count_hex(unsigned long n)
{
	int	len;

	len = 1;
	while (n >= 16)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

int	findformat(char format_l, va_list args, int *counter)
{
	if (format_l == 'd' || format_l == 'i'
		||format_l == 'u' || format_l == 'x' || format_l == 'X')
		return (is_digit(format_l, args, counter));
	else if (format_l == 'c' || format_l == 's' || format_l == '%')
		return (is_alpha(format_l, args, counter));
	else if (format_l == 'p')
		return (is_pointer(args, counter));
	return (*counter);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		counter;

	i = 0;
	counter = 0;
	if (!str)
		return (counter);
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
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
	return (counter);
}
/*#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "hola que pasa";
	
	ft_printf("la dcc de mem de str es = %p\n", &str);
	printf("la dcc de mem de str es = %p\n", &str);
	
	printf(" %p %p hola\n", (void *)0, (void *)0);
	ft_printf(" %p %p ", (void *)0, (void *)0);
	
	
	
	//printf("El número decimal %d es en hexadecimal = %x\n", -1, -1);
	
	
	


	return (0);
}*/
