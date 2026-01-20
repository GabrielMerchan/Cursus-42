/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 17:57:50 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/18 17:57:53 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
char    *ft_strrchr(const char *s, int c)
{
    const char *r;
    if (!s)
        return (0);
    r = NULL;
    while(*s)
    {
        if (*s == c)
            r=s;
        s++;
    }
    if (c == 0)
		return ((char *)s);
    return (char*)r;
}
int main ()
{
    char c[]="Carl Cox";
    printf("Propia: %s\n", ft_strrchr(c, 0));
    printf("Oficial: %s\n", strrchr(c, 0));
    return (0);
}