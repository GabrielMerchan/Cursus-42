/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unbr.c                                    :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 23:30:29 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/28 23:30:32 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <unistd.h>

int	ft_printf_unbr(unsigned int nb)
{
	unsigned long	num;
	int				len;

	len = 0;
	num = (unsigned long)nb;
	if (num >= 10)
		len += ft_printf_unbr(num / 10);
	len += ft_printf_char(num % 10 + '0');
	return (len);
}
/*#include <stdio.h>
int main ()
{
	int res;

	res = ft_printf_unbr(59875);
	printf("\nResultado:%i\n", res);
	return (0);
}*/