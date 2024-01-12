/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hejiezhu <hejiezhu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 19:09:11 by hejiezhu          #+#    #+#             */
/*   Updated: 2024/01/06 21:09:56 by hejiezhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	if ((size_t)dst - (size_t)src < n)
	{
		i = n - 1;
		while (i <= n)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < n)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}

// int main(void)
// {
//     char dst[] = "World";
//     char src[] = "Hello,World";

//     size_t n;
//     void *pDst;
//     void *pSrc;

//     pSrc = src;
//     pDst = dst;
//     n = ft_strlen(pSrc);
//     printf("src @ is before: %p \n", (void *)pSrc);
//     printf("dst @ is before: %p \n", (void *)pDst);
//     printf("src is before: %s \n", src);
//     printf("dst is before: %s \n", dst);

//     ft_memmove(pDst,pSrc, n);
//     //memmove(pDst,pSrc, n);

//     printf("src is after: %s \n", src);
//     printf("dst is after: %s \n", dst);
// }