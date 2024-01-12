/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhu <hzhu@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:15:00 by hejiezhu          #+#    #+#             */
/*   Updated: 2024/01/12 22:36:45 by hzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 3

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int		src_len;
	size_t	index;

	src_len = ft_strlen(src);
	index = 0;
	if (dstsize == 0)
	{
		return (src_len);
	}
	while (index < (dstsize - 1) && src[index] != '\0')
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (src_len);
}

// int main(void)
// {
//     char src[] = "Hello";
//     char buffer[BUFFER_SIZE];

//     printf("buffer before function: %s \n", buffer);

//     ft_strlcpy(buffer, src, BUFFER_SIZE);

//     printf("buffer after function: %s \n", buffer);

//     return (0);
// }