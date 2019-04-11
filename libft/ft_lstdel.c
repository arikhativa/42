/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 16:13:10 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/11 16:23:05 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *cur;
	t_list *old;

	cur = *alst;
	old = *alst;
	while (cur != NULL)
	{
		old = cur;
		(*del)(cur->content, cur->content_size);
		cur = cur->next;
		free(old);
	}
}
