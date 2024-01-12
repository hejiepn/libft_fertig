/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hejiezhu <hejiezhu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:13:53 by hzhu              #+#    #+#             */
/*   Updated: 2024/01/03 23:15:55 by hejiezhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// int	main(void)
// {
// 	int	result;
// 	int	length;
// 	char	testdigit[] = {'0','1','2','3','P','5','6','g','8','9','o','?'};

// 	length = sizeof(testdigit)/sizeof(testdigit[0]);

// 	for(int i = 0; i < length; i++ )
// 	{
// 		result = ft_isalnum(testdigit[i]);
// 		printf("the result of the ft_isalnum function "
// 		"for %c is:%d\n", testdigit[i], result);
// 	}
// 	return (0);
// }
