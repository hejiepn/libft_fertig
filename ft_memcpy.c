/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hejiezhu <hejiezhu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 19:09:11 by hejiezhu          #+#    #+#             */
/*   Updated: 2024/01/06 16:42:34 by hejiezhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				index;
	unsigned char		*ucdst;
	const unsigned char	*cucsrc;

	index = 0;
	ucdst = dst;
	cucsrc = src;
	while (index < n)
	{
		if ((ucdst < cucsrc && ucdst + n < cucsrc) || \
		(cucsrc < ucdst && cucsrc + n < ucdst))
		{
			ucdst[index] = cucsrc[index];
			index++;
		}
		else
		{
			return (dst);
		}
	}
	return (dst);
}

// int main(void)
// {
//     long b;
//     long a;

//     size_t n;
//     void *pDst;
//     void *pSrc;

//     a = 20;
//     b = 10;
//     n = 7;
//     pDst = &a;
//     pSrc = &b;

//     printf("integer a is bf: %ld \n", a);
//     printf("integer b is bf: %ld \n", b);

//     pDst = ft_memcpy(pDst,pSrc, n);

//     printf("integer a is after: %ld \n", a);
//     printf("integer b is after: %ld \n", b);
// }