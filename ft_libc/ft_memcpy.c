/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 14:09:12 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/18 14:09:14 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <string.h>
 #include <stdio.h>

 void *ft_memcpy(void *dest, const void *src, size_t n)
 {
    unsigned const char *Sstr;
    unsigned char *Dstr;
    Sstr = src;
    Dstr = dest;
    int i= 0;
    if (!dest || !src)
        return NULL;

    while (n--)
    {
        Dstr[i]= Sstr[i];
        i++;
    }
    return Dstr;
 }
//  void printArray(int arr[], int n)
// {
//    for (int i=0; i<n; i++)
//       printf("%d ", arr[i]);
// }

// int main ()
// {
//     char s[21]="XXXXXXXXXXXXXXXXX";
//     char d[] = "Gabriel Merchán";
//     // int s[4]={1,1,1,1};
//     // int d[3]={2,5,6};
//     char *f;
//     char *g;
//     printf("Antes: %s\n", d);
//     f=ft_memcpy(d, s, 0*(sizeof(char)));
//     printf("Despues: %s", f);
//     // printArray(f,3);
//     // d[0]=2;
//     // d[1]=5;
//     // d[2]=6;
//     // d[3]=2;
//     // d[4]=7;
//     // d[5]=7;
//     // d[6]=8;
//     g=memcpy(d, s, 0*(sizeof(char)));
//     printf("\nOficial: %s", g);
//     // printArray(g,3);
//     return 0;
// }
