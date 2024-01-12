/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hejiezhu <hejiezhu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 21:26:20 by hejiezhu          #+#    #+#             */
/*   Updated: 2024/01/06 16:42:21 by hejiezhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	integer_to_char;
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = b;
	integer_to_char = (unsigned char)c;
	while (i < len)
	{
		ptr[i] = integer_to_char;
		i++;
	}
	return (b);
}

// int main(void)
// {
//     void *pointer, *pointer_test;
//     int numberToChar, numberToCharTest;
//     size_t len_sizet;

//     numberToChar = 99;
//     numberToCharTest = 122;
//     pointer = &numberToCharTest;
//     pointer_test = &numberToCharTest;
//     len_sizet = 2;

//     pointer = memset(pointer, numberToChar, len_sizet);
//     pointer_test = ft_memset(pointer_test, numberToChar, len_sizet);
//     printf("pointer address after: %p\n ", (void *) pointer);
//     printf("pointer_test address after: %p\n ", (void *) pointer_test);

//     for(size_t i = 0; i < len_sizet; i++)
//     {
	// printf("value pointed by pointer is after: %c\n ",\
	// * (unsigned char *)pointer);
//         printf("value pointed by pointer_test is after: %c\n ",\
// * (unsigned char *)pointer_test);

//     }
// }