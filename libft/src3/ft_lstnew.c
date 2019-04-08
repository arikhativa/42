/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 15:26:02 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/08 15:40:39 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*ft_lstnew(void *c, size_t s)
{
	t_list	*new;

	new = (t_list*)malloc(sizeof(new));
	if (new == NULL)
		return (NULL);
	if (c == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
		new->next = NULL;
		return (new);
	}
	new->content = ft_memalloc(s);
	if (new->content == NULL)
		return (NULL);
	ft_memcpy(new->content, c, s);
	new->content_size = s;
	new->next = NULL;
	return (new);
}
