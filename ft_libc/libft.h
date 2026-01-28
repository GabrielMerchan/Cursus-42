/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 18:58:30 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/18 18:59:10 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <stddef.h>

int ft_isalpha(int i);
int ft_isdigit(int i);
int	ft_isalnum(int i);
int ft_isascii(int i);
int ft_isprint(int i);
size_t ft_strlen( const char *s);
void *ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
char    *ft_strchr(const char *s, int c);
char *ft_substr(char const *s, unsigned int start, size_t len);
int ft_atoi(const char *nptr);
void *ft_calloc(size_t nmemb, size_t size);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int, char*));

//File writing
void ft_putchar_fd(char c, int fd);

#endif
