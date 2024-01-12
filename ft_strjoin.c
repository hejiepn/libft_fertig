/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhu <hzhu@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 22:20:58 by hejiezhu          #+#    #+#             */
/*   Updated: 2024/01/12 22:37:18 by hzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <errno.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		new_str_len;

	new_str_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	new_str = (char *)malloc(sizeof(*s1) * new_str_len);
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s1, ft_strlen(s1) + 1);
	ft_strlcat(new_str, s2, new_str_len);
	return (new_str);
}
