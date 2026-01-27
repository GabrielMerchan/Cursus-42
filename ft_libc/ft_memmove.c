/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 15:36:12 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/18 15:36:15 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *Dstr;
    unsigned const char *Sstr;
   // unsigned char *buff = NULL;

    Dstr = dest;
    Sstr = src;
    if (!dest && !src)
        return NULL;

    if (Dstr<Sstr)
        ft_memcpy(Dstr,Sstr,n);
    else
    {
        while (n--)
            Dstr[n] = Sstr[n]; 
    }

    // j = n;
    // while (j--)
    // {
    //     Dstr[j] = buff[j];
    //     j++; 
    // }
    return Dstr;
}
//  void printArray(int arr[], int n)
// {
//    for (int i=0; i<n; i++)
//       printf("%d ", arr[i]);
// }

int main ()
{
    //char s[21]="XXXXXXXXXXXXXXXXX";
    char d[] = "abcdef";
    // int s[4]={1,1,1,1};
    // int d[3]={2,5,6};
    //char *f;
    char *g;
    // printf("Antes: %s\n", d);
    // f=ft_memmove(d+1, d, 2*(sizeof(char)));
    // printf("Despues: %s", f);
    // printArray(f,3);
    // d[0]=2;
    // d[1]=5;
    // d[2]=6;
    // d[3]=2;
    // d[4]=7;
    // d[5]=7;
    // d[6]=8;
    g= memmove(d+2, d, 4*(sizeof(char)));
    printf("\nOficial: %s", d);
    // printArray(g,3);
    return 0;
}
