/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhu <hzhu@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 23:36:49 by hejiezhu          #+#    #+#             */
/*   Updated: 2024/01/12 22:54:48 by hzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <errno.h>

t_list	*ft_lstnew_bonus(void *content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(*list));
	if (list == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	list->content = content;
	list->next = NULL;
	return (list);
}
