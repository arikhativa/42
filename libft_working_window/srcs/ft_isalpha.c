/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 13:22:57 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/20 18:45:48 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ALPHA (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')

int		ft_isalpha(int c)
{
	if (ALPHA)
		return (1);
	return (0);
}
