/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:37:11 by angcasad          #+#    #+#             */
/*   Updated: 2026/01/15 13:53:27 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "Libft/libft.h"
#include <stdarg.h>

int	ft_printf(const char *, ...);
int	findformat(char format_l, va_list args, int *counter);
int	is_digit(char format_l, va_list args, int *counter);
int	is_alpha(char format_l, va_list args, int *counter);
int	is_hexa(char format_l, va_list args, int *counter);



#endif