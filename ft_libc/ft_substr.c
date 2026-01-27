/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 21:21:20 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/14 21:21:36 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    unsigned int i;
    unsigned int j;

    if (start + len > ft_strlen(s))
        str = malloc((ft_strlen(s)-start)*sizeof(char)+1);
    else
        str = malloc(len*sizeof(char)+1);
    if (str==NULL)
        return NULL;
    i = 0;
    j = 0;
    while(s[j]&& len>i)
    {
        if (j==start)
        {
            while(len>i)
            {
                str[i]= s[j];
                i++;
                j++;
            }
        }
        j++;
    }
    str[i] = '\0';
    return str;
}
/*#include <stdio.h>
int main (int argc, char *argv[])
{
    if (argc!= 4)
        return -1;
    printf("Original: %s\n Buscar: %c\n Resultado: %s\n", argv[1], atoi(argv[2]), ft_substr(argv[1], atoi(argv[2]), atol(argv[3])));
    return 0;
}*/

