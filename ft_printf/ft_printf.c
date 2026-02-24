/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 20:09:00 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/14 20:09:10 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

static int	type_selector(unsigned char type, va_list ap)
{
	int	cont;

	cont = -1;
	if (type == 'c')
		cont = ft_printf_char(va_arg(ap, int));
	else if (type == 's')
		cont = ft_printf_str(va_arg(ap, char *));
	else if (type == 'p')
		cont = ft_printf_ptr(va_arg(ap, void *));
	else if (type == 'i' || type == 'd')
		cont = ft_printf_nbr(va_arg(ap, int));
	else if (type == 'u')
		cont = ft_printf_unbr(va_arg(ap, int));
	else if (type == 'x')
		cont = ft_printf_hex(va_arg(ap, unsigned int), "0123456789abcdef");
	else if (type == 'X')
		cont = ft_printf_hex(va_arg(ap, unsigned int), "0123456789ABCDEF");
	else if (type == '%')
		cont = ft_printf_char('%');
	return (cont);
}

int	ft_printf(char const *str, ...)
{
	va_list	ap;
	int		i;
	int		cont;
	int		ctrl;

	if (!str)
		return (-1);
	i = 0;
	cont = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			ctrl = type_selector(str[++i], ap);
			if (ctrl == -1)
				return (-1);
			cont += ctrl;
		}
		else
			cont += write(1, &str[i], 1);
		i++;
	}
	va_end(ap);
	return (cont);
}

/*
#include <stdio.h>
int	main(void)
{

	printf(" %d ", -1);
	//ft_printf(" %d ", -1);

}
int	main(void)
{
	int	ret_ft;
	int	ret_org;

	ret_ft = 0;
	ret_org = 0;
		// 2. Mix de todo un poco para ver si el va_arg avanza bien
	ret_ft = ft_printf("Mio: El numero %d en hex es %x
	y la letra es %c\n", 42, 42, 'Z');
	ret_org = printf("Org: El numero %d en hex es %x
	y la letra es %c\n", 42, 42, 'Z');
	printf("Longitud -> Mio: %d | Org: %d\n", ret_ft, ret_org);
	return (0);
}
char	type_def(unsigned char* str, va_list ap)
{
	while (*str)
	{
		if(*str == '%')
		{
			str++;
			type_selector(*str, ap);
		}
		str++;
	}
	return (*str);
}
*/
