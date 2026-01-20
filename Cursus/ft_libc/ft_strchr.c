/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 17:57:50 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/18 17:57:53 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
char    *ft_strchr(const char *s, int c)
{
    if (!s)
        return (0);
    while(s)
    {
        if (*s == c)
            return ((char*)s);
        s++;
    }
    if (c == 0)
		return ((char *)s);
    return NULL;
}
/*int main ()
{
    char c[]="Carl Cox";
    printf("Propia: %s\n", ft_strchr(c, 0));
    printf("Oficial: %s\n", strchr(c, 0));
    return (0);
}*/