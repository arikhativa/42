/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 10:31:30 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/03 11:13:14 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(char *str, int n)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)n)
			return (&str[i]);
		i++;
	}
	if (str[i])
		return (&str[i]);
	return (NULL);
}
