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
size_t ft_strlen(const char *s)//esto quitarlo cuando meta la libreria
{
    size_t i = 0;
    while (s[i])
        i++;
    return i;
}
char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    if (!s)
        return (0);
    while(s[i])
    {
        if (s[i] == c)
            return ((char*)&s[i]);
        i++;
    }
    if (c == '\0')
		return ((char *)&s[i]);
    return NULL;
}
char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    int i;
    int c;
    int j;

    j=0;
    i = 0;
    c = 0;  
    while(ft_strchr(set, s1[i]))
        i++;
    c = ft_strlen(s1);
    while (ft_strchr(set, s1[c]))
        c--;
    str = malloc((c-i)*sizeof(char)+2);
    while (i<=c)
        str[j++]=s1[i++];
    str[j]='\0';
    return str;
}
/*#include <stdio.h>
int main (int argc, char *argv[])
{
    if (argc!= 3)
        return -1;
    printf("Primera: %s\nQuitar: %s\nResultado: %s\n", argv[1], argv[2], ft_strtrim(argv[1],argv[2]));
    return 0;
}
//Pongo +2 en el malloc porque 1 es por el nulo que no pilla 
//el strlen de c y otro para el nulo propio de str*/
