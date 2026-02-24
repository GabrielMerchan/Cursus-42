/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 23:30:29 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/28 23:30:32 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <unistd.h>

int	ft_printf_hex(unsigned long nb, char *base)
{
	int	len;

	len = 0;
	if (nb >= 16)
		len += ft_printf_hex(nb / 16, base);
	len += ft_printf_char(base[nb % 16]);
	return (len);
}
/*#include <stdio.h>
int main ()
{
	int res;

	res = ft_printf_hex(59875, "0123456789abcdef");
	printf("\nResultado:%i\n", res);
	return (0);
}*/