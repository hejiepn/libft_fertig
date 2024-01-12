/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hejiezhu <hejiezhu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:33:55 by hzhu              #+#    #+#             */
/*   Updated: 2024/01/06 15:37:28 by hejiezhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

// int	main(void)
// {
// 	int	result;
// 	int testchar;

// 	testchar = '9';
// 	result = ft_isalpha(testchar); 
// 	printf("the result of the ft_isalpha function is:%d", result);

// 	return (0);
// }
