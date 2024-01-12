/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hejiezhu <hejiezhu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:53:52 by hejiezhu          #+#    #+#             */
/*   Updated: 2024/01/03 23:35:39 by hejiezhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int	main(void)
// {
// 	int	result;
//     int real_result;
// 	int	length;
// 	char	testdigit[] = {'0','1','2','3','P','5','6',\
//'g','8','9','o','?','.','^','}','\x7E','\x20'};
// 	// '\x7e' is the DEL symbol
//     // '\x40' is Space Symbol

// 	length = sizeof(testdigit)/sizeof(testdigit[0]);

// 	for(int i = 0; i < length; i++ )
// 	{
// 		result = ft_isprint(testdigit[i]);
//         real_result = isprint(testdigit[i]);
//         if(real_result == result)
//         {
//             printf("True for %c \n",testdigit[i]);
//         }
//         else
//         {
//             printf("False for %c \n",testdigit[i]);
//         }
// 	}
// 	return (0);
// }