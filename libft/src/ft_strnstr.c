/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 13:03:20 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/03 13:16:33 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../includes/libft.h"

char	*ft_strnstr(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int z;

	if (!(*s2))
		return (s1);
	i = 0;
	z = 0;
	while (s1[i] && (i - 1 + ft_strlen(s2)) < n)
	{
		while (s1[i + z] == s2[z])
		{
			if (s2[z + 1] == '\0')
				return (&s1[i]);
			z++;
		}
		z = 0;
		i++;
	}
	return (NULL);
}
