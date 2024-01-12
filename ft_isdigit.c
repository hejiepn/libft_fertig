/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhu <hzhu@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:28:54 by hzhu              #+#    #+#             */
/*   Updated: 2023/12/18 16:15:10 by hzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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
// 	int	testdigit[] = {'0','1',2,3,4,'5',6,7,8,9,'o','?'};

// 	length = sizeof(testdigit)/sizeof(testdigit[0]);

// 	for(int i = 0; i < length; i++ )
// 	{
// 		result = ft_isdigit(testdigit[i]);
// 		printf("the result of the ft_isdigit function "
// 		"for %d is:%d\n", testdigit[i], result);
// 	}
// 	return (0);
// }