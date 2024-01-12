/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hejiezhu <hejiezhu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:03:25 by hzhu              #+#    #+#             */
/*   Updated: 2024/01/06 16:42:54 by hejiezhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	calloc_size;

	calloc_size = count * size;
	ptr = malloc(calloc_size);
	if (ptr == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_bzero(ptr, calloc_size);
	return (ptr);
}

// int main(void)
// {
// 	int i, * ptr, *ptrTest, sum, sumTest;

// 	sum = 0;
// 	sumTest = 0;

// 	ptr = calloc(10, sizeof(int));
// 	if (ptr == NULL) {
// 		printf("Error! ptr memory not allocated.");
// 		exit(0);
// 	}
// 	printf("Building and calculating the \
//sequence sum of the first 10 terms \n ");
// 	for (i = 0; i < 10; ++i) { 
// 		* (ptr + i) = i;
// 		sum += * (ptr + i);
// 	}

// 	ptrTest = ft_calloc(10, sizeof(int));
// 	if (ptrTest == NULL) {
// 	printf("Error! ptrTest memory not allocated.");
// 	exit(0);
// 	}
// 	printf("Building and calculating the \
//sequence sum of the first 10 terms \n ");
// 	for (i = 0; i < 10; ++i) { 
// 		* (ptrTest + i) = i;
// 		sumTest += * (ptrTest + i);
// 	}

// 	printf("Sum = %d \n", sum);
// 	printf("SumTest = %d \n", sumTest);
// 	free(ptr);
// 	free(ptrTest);
// 	return 0;
// }