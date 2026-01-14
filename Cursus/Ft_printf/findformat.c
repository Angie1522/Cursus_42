/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findformat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 13:36:52 by angcasad          #+#    #+#             */
/*   Updated: 2026/01/14 15:03:52 by angcasad         ###   ########.fr       */
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
void	ft_putnbr_u_fd(unsigned int n, int fd)
{
	if (n <= 9)
	{
		ft_putchar_fd((n + '0'), fd);
		return ;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
int	is_digit(char format_l, va_list args, int *counter)
{
	int	sum;
	int	num;
	unsigned int	u_num;

	if( format_l == 'd' || format_l == 'i' )
	{
		num = va_arg(args, int );
		ft_putnbr_fd(num, 1);
		sum = count_digit(num);
		*counter += sum;
		return(*counter);
	}
	else if( format_l == 'u')
	{
		u_num = va_arg(args, unsigned int );
		ft_putnbr_u_fd(u_num, 1);
		sum = count_digit(u_num);
		*counter += sum;
		return(*counter);
	}
	return(*counter);
}
int	is_alpha(char format_l, va_list args, int *counter)
{
	int	cha;
	char	*str;
	
	if(format_l == 'c')
	{
		cha = va_arg(args, int );
		ft_putchar_fd((char)cha, 1);
		*counter += 1;
		return(*counter);
	}
	else if(format_l == 's')
	{
		str = va_arg(args, char *);
		ft_putstr_fd(str, 1);
		*counter += 1;
		return(*counter);
	}
	return(*counter);
}

int	findformat(char format_l, va_list args, int *counter)
{
	if( format_l == 'd' || format_l == 'i' || format_l == 'u')
		return (is_digit(format_l, args, counter));
	
	else if(format_l == 'c' || format_l == 's')
		return (is_alpha(format_l, args, counter));
	
	return(*counter);

}
