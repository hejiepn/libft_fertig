/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hejiezhu <hejiezhu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 22:41:59 by hejiezhu          #+#    #+#             */
/*   Updated: 2024/01/04 00:19:38 by hejiezhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
		return (c);
	}
	return (c);
}

// int	main(void)
// {
// 	int	result;
// 	int	length;
// 	char	testdigit[] = {'A','a','b','B','i','P','6','g','8','9','o','?'};

// 	length = sizeof(testdigit)/sizeof(testdigit[0]);

// 	for(int i = 0; i < length; i++ )
// 	{
// 		result = ft_tolower(testdigit[i]);
// 		printf("the result of the ft_tolower function "
// 		"for %c is: %c\n", testdigit[i], result);
// 	}
// 	return (0);
// }