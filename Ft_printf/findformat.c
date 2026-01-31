/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findformat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 13:36:52 by angcasad          #+#    #+#             */
/*   Updated: 2026/01/17 17:58:55 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u_fd(unsigned int n, int fd)
{
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd((n + '0'), fd);
}

void	is_hexa(unsigned long n, char format_l)
{
	unsigned long	mod;

	if (n >= 16)
		is_hexa(n / 16, format_l);
	mod = n % 16;
	if (mod < 10)
		ft_putchar_fd((mod + '0'), 1);
	else if (mod >= 10 && mod <= 15)
	{
		if (format_l == 'X')
			ft_putchar_fd('A' + (mod - 10), 1);
		else if (format_l == 'x')
			ft_putchar_fd('a' + (mod - 10), 1);
	}
}

int	is_digit(char format_l, va_list args, int *counter)
{
	int				num;
	long			n;
	unsigned int	u_num;

	if (format_l == 'd' || format_l == 'i')
	{
		num = va_arg(args, int );
		n = (long)num;
		ft_putnbr_fd(n, 1);
		return (*counter += count_digit(n));
	}
	else if (format_l == 'u')
	{
		u_num = va_arg(args, unsigned int );
		ft_putnbr_u_fd(u_num, 1);
		return (*counter += count_digit(u_num));
	}
	else if (format_l == 'x' || format_l == 'X')
	{
		u_num = va_arg(args, unsigned int );
		is_hexa(u_num, format_l);
		return (*counter += count_hex(u_num));
	}
	return (*counter);
}

int	is_alpha(char format_l, va_list args, int *counter)
{
	int		character;
	char	*str;

	if (format_l == 'c')
	{
		character = va_arg(args, int );
		ft_putchar_fd((char)character, 1);
		return (*counter += 1);
	}
	else if (format_l == 's')
	{
		str = va_arg(args, char *);
		if (str == NULL)
		{
			ft_putstr_fd("(null)", 1);
			return (*counter += 6);
		}
		ft_putstr_fd(str, 1);
		return (*counter += ft_strlen(str));
	}
	else
	{
		ft_putchar_fd('%', 1);
		return (*counter += 1);
	}
}

int	is_pointer(va_list args, int *counter)
{
	unsigned long	p;

	p = va_arg(args, unsigned long);
	if (p == 0)
	{
		ft_putstr_fd("(nil)", 1);
		return (*counter += 5);
	}
	ft_putstr_fd("0x", 1);
	*counter += 2;
	is_hexa(p, 'x');
	return (*counter += (count_hex(p)));
}
