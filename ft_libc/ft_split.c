/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:04:47 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/27 19:04:50 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"
void *ft_freeall(char **s)
{
    int i;

    i=0;
    while (s[i])
    {
        free(s[i]);
        i++;
    }
    free(s);
    return NULL;
}
int ft_countwords(char const *s, char c)
{
    int count;
    int i;

    count = 0;
    i = 0;   
    while (s[i])
    {
        if(s[i]!=c)
        {
            count++;
            while (s[i]&& s[i]!=c)
                i++;
        }
        else
            i++;
    }
    return count;
}
char **ft_split(char const *s, char c)
{
    char **list;
    int count;
    int i;
    int wl;

    i = 0;
    wl = 0;
    count = ft_countwords(s, c);
    list=malloc(sizeof(char*) * (count+ 1));
    
    if(!list)
        return NULL;
    list[count]= NULL;
    while (count > 0 && s[i])
    {       
            if(s[i]!=c)
            {
                while (s[i+wl]!=c && s[i+wl])
                {
                    wl++;
                }
                list[count-1] = ft_substr(s, i, wl);
                if (!list[count - 1])
                    return (ft_freeall(list));
                count--;
                i += wl;
                wl = 0;
            }
            else
                i++;
    }
    return list;
}
#include <stdio.h>
int main (int argc, char *argv[])
{
    char **lista;
    int i = 0;
    if (argc != 3)
        return -1;
    lista = ft_split(argv[1], argv[2][0]);
    while (lista[i])
    {
        printf("Palabra %i:\n %s",i,lista[i]);
        i++;
    }

    return 0;
}
