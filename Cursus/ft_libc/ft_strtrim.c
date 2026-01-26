/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 21:21:20 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/14 21:21:36 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
size_t ft_strlen(const char *s)//esto quitarlo cuando meta la libreria
{
    size_t i = 0;
    while (s[i])
        i++;
    return i;
}
char    *ft_strchr(const char *s, int c)
{
    if (!s)
        return (0);
    while(*s)
    {
        if (*s == c)
            return ((char*)s);
        s++;
    }
    if (c == '\0')
		return ((char *)s);
    return NULL;
}
char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    int i;
    int j;

    i = 0;
    j = 0;
    str = malloc(ft_strlen(s1)*sizeof(char));
    str = (char*)s1;

    return str;
}
#include <stdio.h>
int main (int argc, char *argv[])
{
    if (argc!= 3)
        return -1;
    printf("Primera: %s\nQuitar: %s\nResultado: %s\n", argv[1], argv[2], ft_strtrim(argv[1],argv[2]));
    return 0;
}
