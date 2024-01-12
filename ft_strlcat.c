/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhu <hzhu@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:15:00 by hejiezhu          #+#    #+#             */
/*   Updated: 2024/01/12 22:42:20 by hzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_length;
	size_t	src_length;

	src_length = ft_strlen(src);
	if (size == 0)
		return (src_length);
	dest_length = ft_strlen((const char *)dst);
	j = dest_length;
	i = 0;
	if (dest_length < size - 1 && size > 0)
	{
		while (src[i] && dest_length + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dest_length >= size)
		dest_length = size;
	return (dest_length + src_length);
}

// int main(void)
// {
// 	size_t result_cat;
// 	int result_cmp;
// 	char dest[30];
// 	memset(dest, 0, 30);
// 	char * src = (char *)"AAAAAAAAA";
// 	dest[0] = 'B';
// 	memset(dest, 'B', 4);
// 	memset(dest, 'C', 5);
// 	int result;
	// /* 5 */ result = ft_strlcat(dest, src, -1) == \
	//14 && !strcmp(dest, "CCCCCAAAAAAAAA");
// 	result_cat = ft_strlcat(dest, src, -1);
// 	result_cmp = strcmp(dest, "CCCCCAAAAAAAAA");
// 	write(1,"\n", 1);
// 	write(1, dest, 30);		
// 	write(1,"\n", 1);
// 	printf("result: %d\n", result);
// 	printf("result_cat: %lu\n", result_cat);
// 	printf("result_cmp: %d\n", result_cmp);
// }