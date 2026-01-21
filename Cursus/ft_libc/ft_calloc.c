/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 22:20:41 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/21 22:22:47 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    if (nmemb == 0 || size == 0)
        return NULL;
    while (nmemb--)
    {
        ptr= malloc(size*sizeof(typeof(ptr)));
        ptr++;
    }
    return ptr;
}
int main (int argc, char *argv[])
{
    if (argc!=3)
        return -1;
    ft_calloc(atoi(argv[1]),atoi(argv[2]));
    return 0;
}