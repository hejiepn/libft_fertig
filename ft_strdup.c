/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhu <hzhu@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:23:17 by hzhu              #+#    #+#             */
/*   Updated: 2024/01/12 22:37:25 by hzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	size_t	s_len;
	void	*str_ptr;

	s_len = ft_strlen(s1) + 1;
	str_ptr = malloc(s_len);
	if (str_ptr == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_strlcpy((char *)str_ptr, s1, s_len);
	return (str_ptr);
}

// int main(void)
// {
// 	const char *s = "hello";
// 	char *ptrS;

// 	ptrS = ft_strdup(s);
// 	if(ptrS == NULL)
// 	{
// 		printf("Error! ptrS memory not allocated.");
//  		exit(0);
// 	}

// 	printf("original string: %s and strdup string is: %s \n", s, ptrS);
// 	return 0;
// }