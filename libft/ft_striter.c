/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 12:54:31 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/20 18:55:27 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char*))
{
	int i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(s + i);
		i++;
	}
}
