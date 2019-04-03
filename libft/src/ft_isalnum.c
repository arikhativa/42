/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 13:51:28 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/03 13:52:18 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ALPHA (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')

int		ft_isalnum(char c)
{
	if (ALPHA)
		return (1);
	return (0);
}
