/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhu <hzhu@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 23:49:18 by hejiezhu          #+#    #+#             */
/*   Updated: 2024/01/12 22:57:36 by hzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter_bonus(t_list *lst, void (*f)(void *))
{
	if (!f || !lst)
	{
		return ;
	}
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
