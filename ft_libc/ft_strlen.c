/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 20:36:31 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/14 20:36:36 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

size_t ft_strlen(const char *s)
{
    size_t i;
    
    i = 0;
    while (s[i])
        i++;
    return i;
}
// int main ()
// {
//         printf("%lu\n", ft_strlen("fdlñghsdfghsdfjkgbsdjfgbjsdbfnpajdsfnoueawbnfolkjbfjasdbhfjkasdbhfjkyebvnkljbv3424  ug f udsg f 4g 8732g yuef"));
//         printf("%lu\n", strlen("fdlñghsdfghsdfjkgbsdjfgbjsdbfnpajdsfnoueawbnfolkjbfjasdbhfjkasdbhfjkyebvnkljbv3424  ug f udsg f 4g 8732g yuef"));
//         return 0;
// }