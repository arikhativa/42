/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 10:56:39 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/07 11:56:42 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static	int	count(int n, int i)
{
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	putnbr(int n, char *s, int i)
{
	if (n / 10 != 0)
		putnbr(n / 10, s, i - 1);
	s[i] = (n % 10) + '0';
}

char	*ft_itoa(int n)
{
	char *s;
	int i;
	int neg;

	i = 0;
	neg = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
		neg = 1;
	}
	i = count(n, i);
	s = ft_strnew(i);
	if (s == NULL)
		return (NULL);
	putnbr(n, s, i - 1);
	if (neg)
		s[0] = '-';
	return (s);
}
