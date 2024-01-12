/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhu <hzhu@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:54:46 by hzhu              #+#    #+#             */
/*   Updated: 2024/01/12 23:14:44 by hzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	cur;
	int	num;
	int	sign;

	cur = 0;
	num = 0;
	sign = 1;
	while ((str[cur] >= 9 && str[cur] <= 13) || str[cur] == ' ')
		cur++;
	if (str[cur] == '+' || str[cur] == '-')
	{
		if (str[cur] == '-')
			sign = -1;
		cur++;
	}
	while (str[cur] >= '0' && str[cur] <= '9')
	{
		num = num * 10 + str[cur] - '0';
		cur++;
	}
	return (num * sign);
}

// int main(void)
// {
// 	char str[BUFFERSIZE];
// 	int result;
// 	int resultTest;

// 	ft_strlcpy(str, "-9  9", BUFFERSIZE);
// 	result = atoi(str);
// 	resultTest = ft_atoi(str);
// 	printf("atoi: string_value is %s and integer value is %d \n",str,result);
// 	printf("ft_atoi: string_value is %s and \
//integer value is %d \n",str,resultTest);
// }