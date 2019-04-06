/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:15:43 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/06 11:03:08 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_A
# define LIBFT_A

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int		ft_strlen(const char *str);
char	*ft_strdup(const char *str);
int		ft_atoi(const char *str);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t i);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t n);
char	*ft_strchr(const char *str, int n);
char	*ft_strstr(const char *s1, const char *s2);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
int		ft_isalpha(char c);
int		ft_isdigit(char c);
int		ft_isascii(char c);
int		ft_isprint(char c);
int		ft_isalnum(char c);
char	*ft_strcat(char *dst, const char *src);
char	*ft_strncat(char *dst, const char *src, size_t i);
int		ft_strlcat(char *dst, const char *src, size_t i);
void	*ft_memset(void *ptr, int n, size_t len);
int		ft_memcmp(void *s1, void *s2, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_toupper(int n);
int		ft_tolower(int n);
void	ft_bzero(void *str, size_t n);

#endif
