/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:13:03 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/03 14:16:48 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dst, char *src, unsigned int i)
{
	unsigned int n;
	unsigned int a;

	n = 0;
	a = 0;
	while (dst[n])
		n++;
	while (src[a] && a < i)
	{
		dst[n + a] = src[a];
		a++;
	}
	dst[n + a] = '\0';
	return (dst);
}
