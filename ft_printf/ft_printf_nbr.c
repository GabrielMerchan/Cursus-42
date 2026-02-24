/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 23:30:29 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/28 23:30:32 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <unistd.h>

int	ft_printf_nbr(int nb)
{
	long	num;
	int		len;

	len = 0;
	num = (long)nb;
	if (nb < 0)
	{
		len += ft_printf_char('-');
		num *= -1;
	}
	if (num >= 10)
		len += ft_printf_nbr(num / 10);
	len += ft_printf_char(num % 10 + '0');
	return (len);
}
/*#include <stdio.h>
int main ()
{
	int res;

	res = ft_printf_nbr(-1);
	printf("\nResultado:%i\n", res);
	return (0);
}*/