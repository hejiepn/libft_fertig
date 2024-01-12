/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hejiezhu <hejiezhu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:25:40 by hejiezhu          #+#    #+#             */
/*   Updated: 2024/01/06 16:41:35 by hejiezhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				index;
	const unsigned char	*ps1;
	const unsigned char	*ps2;

	index = 0;
	ps1 = (const unsigned char *)s1;
	ps2 = (const unsigned char *)s2;
	while (index < n && (ps1[index] != '\0' || ps2[index] != '\0'))
	{
		if (ps1[index] != ps2[index])
		{
			return (ps1[index] - ps2[index]);
		}
		index++;
	}
	if (index < n && (ps1[index] == '\0'))
	{
		return (-ps2[index]);
	}
	else if (index < n && (ps2[index] == '\0'))
	{
		return (ps1[index]);
	}
	return (0);
}

// int main(void)
// {
// 	char *s1 = "ha";
// 	char *s2 = "hallo";

// 	size_t n  = 2;
// 	int returnValue;
// 	int returnValueTEST;

// 	returnValue = strncmp(s1,s2,n);
// 	returnValueTEST = ft_strncmp(s1,s2,n);

// 	printf("returnvalue is %d\n", returnValue);
// 	printf("returnValueTEST is %d\n", returnValueTEST);

// }