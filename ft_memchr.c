/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hejiezhu <hejiezhu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 22:44:24 by hejiezhu          #+#    #+#             */
/*   Updated: 2024/01/06 16:42:05 by hejiezhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				index;
	const unsigned char	*p_goal;

	index = 0;
	p_goal = (const unsigned char *)s;
	while (index < n)
	{
		if (p_goal[index] == (unsigned char)c)
		{
			return ((void *)p_goal + index);
		}
		index++;
	}
	return (NULL);
}

// int main(void)
// {
//     int s1 = 423;
//     char s2 = '\x42';

// 	int *ps1;
//     void *foundChar;
// 	size_t n;

// 	ps1 = &s1;
// 	n = 4;
//     foundChar = ft_memchr(ps1, s2, n);
// 	printf("found char is: %02X \n", *(unsigned char *)foundChar);
// }