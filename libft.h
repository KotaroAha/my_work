/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinami <kinami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:39:56 by kinami            #+#    #+#             */
/*   Updated: 2023/05/25 17:56:56 by kinami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>


int        ft_isalpha(int c);
int        ft_isdigit(int c);
int        ft_isalnum(int c);
int        ft_isascii(int c);
int        ft_isprint(int c);
size_t    ft_strlen(const char *str);
void    *ft_memset(void *ptr, int val, size_t len);
void    ft_bzero(void *ptr, size_t len);
void    *ft_memcpy(void *dest, const void *src, size_t len);
void    *ft_memmove(void *dest, const void *src, size_t len);
size_t    ft_strlcpy(char *dest, const char *src, size_t size);
size_t    ft_strlcat(char *dest, const char *src, size_t size);
//int        ft_toupper(int c);
//int        ft_tolower(int c);
//char    ft_strchr(const chars, int c);
//char    ft_strrchr(const chars, int c);
//int        ft_strncmp(const char s1, const chars2, size_t n);
//void    ft_memchr(const voids, int c, size_t n);
//int        ft_memcmp(const void s1, const voids2, size_t n);
//char    ft_strnstr(const charhaystack, const char needle, size_t len);
//int        ft_atoi(const charstr);
//void    *ft_calloc(size_t count, size_t size);
//char    ft_strdup(const charsrc);
//char    ft_strdup(const chars1);

//char    ft_substr(char consts, unsigned int start, size_t len);
//char    ft_strjoin(char consts1, char const *s2);

#endif