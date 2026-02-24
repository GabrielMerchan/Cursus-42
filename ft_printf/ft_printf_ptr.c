/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 23:30:29 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/28 23:30:32 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <unistd.h>

int	ft_printf_ptr(void *ptr)
{
	unsigned long	l_str;
	int				len;

	if (ptr == NULL)
		return (ft_printf_str("(nil)"));
	len = 0;
	l_str = (unsigned long)ptr;
	write(1, "0x", 2);
	len = ft_printf_hex(l_str, "0123456789abcdef") + 2;
	return (len);
}
/*#include <stdio.h>
int main ()
{
	int res;
	int str = 12;

	res = ft_printf_ptr(&str);
	printf("\nResultado:%i\n", res);
	printf("Oficial:%p\n", &str);

	return (0);
}*/