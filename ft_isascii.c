/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hejiezhu <hejiezhu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:59:54 by hzhu              #+#    #+#             */
/*   Updated: 2024/01/03 23:34:02 by hejiezhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
// 	int	length;
// 	char	testdigit[] = {'0','1','2','3','P','5',\
//'6','g','8','9','o','?','.','^','}','\x7E'};
// 	// '\x7e' is the DEL symbol

// 	length = sizeof(testdigit)/sizeof(testdigit[0]);

// 	for(int i = 0; i < length; i++ )
// 	{
// 		result = ft_isascii(testdigit[i]);
// 		printf("the result of the ft_isascii function "
// 		"for %c is:%d\n", testdigit[i], result);
// 	}
// 	return (0);
// }
