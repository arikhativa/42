/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:15:43 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/03 11:15:42 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_A
# define LIBFT_A

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int		ft_strlen(char *str);
char	*ft_strdup(char *str);
int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, int i);
char	*ft_strcpy(char *dst, char *src);
char	*ft_strncpy(char *dst, char *src, unsigned int n);
char	*ft_strchr(char *str, int n);
char	*ft_strrchr(char *str, int n);





#endif
