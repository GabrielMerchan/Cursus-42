/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                         :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:04:47 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/27 19:04:50 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static int	digit_count(int n, int numlen)
{
	int	digits;

	digits = n;
	while (digits > 0)
	{
		digits /= 10;
		numlen++;
	}
	return (numlen);
}

static void	*set_num(int numlen, int n, char *str)
{
	str[numlen] = '\0';
	while (numlen > 0)
	{
		str[numlen - 1] = 48 + n % 10;
		n /= 10;
		numlen--;
	}
	return (str);
}

static void	*set_neg_num(int numlen, int n, char *str)
{
	str[0] = '-';
	str[numlen] = '\0';
	while (numlen > 1)
	{
		str[numlen - 1] = 48 + n % 10;
		n /= 10;
		numlen--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		numlen;

	numlen = 0;
	if (!n)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		numlen = digit_count(n, numlen) + 1;
		str = malloc((sizeof(char) * numlen) + 1);
		if (!str)
			return (NULL);
		set_neg_num(numlen, n, str);
	}
	else
	{
		numlen = digit_count(n, numlen);
		str = malloc((sizeof(char) * numlen) + 1);
		if (!str)
			return (NULL);
		set_num(numlen, n, str);
	}
	return (str);
}
/*
#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
    int n;
    n = atoi(argv[1]);
    if (argc!= 2)
        return (-1);
    printf("Number: %i\nItoa: %s\n", n, ft_itoa(n));
    return (0);
}*/