/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhu <hzhu@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 22:32:01 by hejiezhu          #+#    #+#             */
/*   Updated: 2024/01/05 16:33:28 by hzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
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
// 		result = ft_toupper(testdigit[i]);
// 		printf("the result of the ft_toupper function "
// 		"for %c is: %c\n", testdigit[i], result);
// 	}
// 	return (0);
// }