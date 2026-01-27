/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 20:33:16 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/21 20:33:19 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *nptr)
{
    int sng;
    int nmb;

    nmb = 0;
    sng = 1;
    while (*nptr == 32||(*nptr>=9&&*nptr<=13))
        nptr++;
    if (*nptr == 43|| *nptr==45)
    {
        if(*nptr == 45)
            sng *=-1;
        nptr++;
    }
    while(*nptr>=48 && *nptr<=57)
    {
        if (!(*nptr>=48 && *nptr<=57))
            break;
        nmb += *nptr;
        nmb *=10;
        nptr++;
    }
    return nmb*sng;
}
// #include <stdlib.h>
// #include <stdio.h>
// int main(int argc, char *argv[])
// {
//     if (argc !=2)
//         return -1;
//     printf("Numero: %s\n", argv[1]);
//     printf("Atoi Of: %i\n", atoi(argv[1]));
//     printf("Atoi Pr: %i", atoi(argv[1]));
//     return 0;
// }
