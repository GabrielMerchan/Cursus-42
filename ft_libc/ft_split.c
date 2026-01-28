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
    int varArr[4];//[0]=cont wrd | [1]=cont recorrer s | [2]=long wrd | [3]=list wrd 

    varArr[1] = 0;
    varArr[3] = 0;
    varArr[0] = ft_countwords(s, c);
    list=malloc(sizeof(char*) * (varArr[0]+ 1));
    if(!list)
        return NULL;
    while (varArr[0] > varArr[3] && s[varArr[1]])
    {       
            if(s[varArr[1]]!=c)
            {
                while (s[varArr[1]+varArr[2]]!=c && s[varArr[1]+varArr[2]])
                    varArr[2]++;
                list[varArr[3]] = ft_substr(s, varArr[1], varArr[2]);
                if (!list[varArr[3]])
                    return (ft_freeall(list));
                varArr[3]++;
                varArr[1] += varArr[2];
            }
            varArr[1]++;
            varArr[2] = 0;
    }
    list[varArr[3]]= NULL;
    return list;
}
/*#include <stdio.h>
int main (int argc, char *argv[])
{
    char **lista;
    int i = 0;
    if (argc != 3)
        return -1;
    lista = ft_split(argv[1], argv[2][0]);
    while (lista[i])
    {
        printf("Palabra %i: %s\n",i,lista[i]);
        i++;
    }

    return 0;
}*/
