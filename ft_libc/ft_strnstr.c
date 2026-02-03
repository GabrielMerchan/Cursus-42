/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 19:09:28 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/21 19:09:32 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <bsd/string.h>


char *ft_strnstr(const char *big, const char *little, size_t len)
{
    int i;
    size_t c;
    
    c = 0;
    i= 0;
    if(!little)
        return (char *)big;
    while(*big&&len--)
    {
        while(big[c] == little[c]&&little[c])
        {
            if(len<c)
                break;
            c++;
        }
        if(little[c]=='\0')
            return (char *)big;
        c = 0;
        big++;
    }
    return NULL;
}
//#include <stdio.h>
// int main(int argc, char *argv[])
// {
//     if(argc!=4)
//         return -1;
//     printf("Pajar: %s\n",argv[1]);
//     printf("Aguja: %s\n",argv[2]);
//     printf("Len: %d\n",atoi(argv[3]));
//     printf("Oficial: %s\n",strnstr(argv[1], argv[2], atoi(argv[3])));
//     printf("Propia: %s\n",ft_strnstr(argv[1], argv[2], atoi(argv[3])));
    
//     return 0;
// }
