/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhu <hzhu@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 21:02:21 by hejiezhu          #+#    #+#             */
/*   Updated: 2024/01/12 22:35:49 by hzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

int	ft_strlen(const char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int main(void)
// {
//     int test_result;
//     int real_result;

//     char *pWord = "Helljkljlkjljo";

//     real_result = strlen(pWord);
//     test_result = ft_strlen(pWord);
//     if(test_result == real_result)
//     {
//         printf("Strlen is: %d", test_result);
//     }
//     else
//     {
//        return (0);
//     }
// }