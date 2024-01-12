/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hejiezhu <hejiezhu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:35:47 by hejiezhu          #+#    #+#             */
/*   Updated: 2024/01/06 16:45:10 by hejiezhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// int main(void)
// {
//     void *pTest, *pReal;
//     size_t nBytes;
//     int testNumber;

//     testNumber = 99; //in ascii 99 = 'c'
//     pTest = &testNumber;
//     pReal = &testNumber;
//     nBytes = 2;

//     for(size_t i = 0; i < nBytes; i++)
//     {
//         printf("value pointed by pTest is bf: %c\n "\
//, * ((unsigned char *)pTest+i));
//         printf("value pointed by pReal is bf: %c\n "\
//, * ((unsigned char *)pReal+i));
//     }
//     ft_bzero(pTest, nBytes);
//     bzero(pReal, nBytes);  

//     for(size_t i = 0; i < nBytes; i++)
//     {
		// printf("value pointed by pTest is after: %c\n "\
		//, * ((unsigned char *)pTest+i));
//         printf("value pointed by pReal is after: %c\n "\
//, * ((unsigned char *)pReal+i));
//     } 
// }