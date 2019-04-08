/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 16:17:45 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/06 16:23:33 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memalloc(size_t size)
{
	char *p;

	if (!(p = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	ft_bzero(p, size);
	return (p);
}
