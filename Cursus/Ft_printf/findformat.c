/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findformat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 13:36:52 by angcasad          #+#    #+#             */
/*   Updated: 2026/01/12 14:18:48 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int	count_digit(int num)
{
	int	total;
	
	total = 0;
	if( num == 0 )
	{
		total++;
		return (total);
	}
	if (num < 0)
	{
		total++;
		num = num * (-1);
	}
	while (num > 0)
	{
		 num = num/10;
		total++;
	}
	return(total);
	
}

int	findformat(char format_l, va_list args, int *counter)
{
	int	num;
	int	cha;
	int	sum;

	if( format_l == 'd' )
	{
		num = va_arg(args, int );
		ft_putnbr_fd(num, 1);
		sum = count_digit(num);
		counter += sum;
		return(&counter);
	}
	
	
}