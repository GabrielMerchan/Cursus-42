/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 17:57:50 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/18 17:57:53 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>
size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i = 0;
    size_t j = 0;
    if (!dst || !src)
        return (0);
    while(dst[i])//aqui hay que poner i = strlen(dst);
        i++;
    if (i >= size)
        return (i+size-1);//el -1 es porque quita el espacio del nulo.
    while (src[j]&&(size-1 -i) > j)
    {
        printf("Entra");
        dst[i+j] = src[j];
        j++;
    }
    dst[i+j]= '\0';
    j=0;
    while (src[j])    //aqui hay que poner j = strlen(src);
        j++;
    return (i+j);
}

/*int	main(int argc, char **argv)
{
	char	*dest;
	char	*src;
	int i;

	if (argc != 4)
		return (-1);
	dest = strdup(argv[1]);
	src = strdup(argv[2]);
	i = ft_strlcat(dest, src, atoi(argv[3]));
	printf("dest:%s\nsrc:%s\nsize:%i\n", dest, src, i);
	free(dest);
	free(src);
	return (0);
}*/