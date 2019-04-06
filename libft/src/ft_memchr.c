/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 12:42:07 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/04 12:46:18 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(void *str, int c, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		if ((((*(char*)(str + i))) = c))
			return (str + i);
		i++;
	}
	return (NULL);
}
