/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:27:54 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/03 15:06:25 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_strlcat(char *dst, char *src, unsigned int i)
{
	unsigned int n;
	unsigned int a;

	n = 0;
	a = 0;
	while (dst[n] && n < i)
		n++;
	while (src[a] && (n + a + 1) < i)
	{
		dst[n + a] = src[a];
		a++;
	}
	dst[n + a] = '\0';
	return (n + ft_strlen(src));
}
