/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hejiezhu <hejiezhu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:52:45 by hzhu              #+#    #+#             */
/*   Updated: 2024/01/06 20:34:35 by hejiezhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
	{
		if (((unsigned char *)s1)[index] != \
		((unsigned char *)s2)[index])
		{
			return (((unsigned char *)s1)[index] - \
			((unsigned char *)s2)[index]);
		}
		index++;
	}
	return (0);
}

// int main(void)
// {
// 	// char s[] = {-128, 0, 127, 0};
// 	// char sCpy[] = {-128, 0, 127, 0};
// 	char s2[] = {0, 0, 127, 0};
// 	char s3[] = {0, 0, 42, 0};
// 	int returnValueTEST;
// 	/* 5 */ returnValueTEST = ft_memcmp(s2, s3, 4); // !=0
// 	printf("returnValueTEST is %d\n", returnValueTEST);
// }