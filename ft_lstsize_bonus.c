/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhu <hzhu@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 00:07:25 by hejiezhu          #+#    #+#             */
/*   Updated: 2024/01/12 22:56:49 by hzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize_bonus(t_list *lst)
{
	int	lst_len;

	lst_len = 0;
	while (lst)
	{
		lst = lst->next;
		lst_len++;
	}
	return (lst_len);
}
