/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhu <hzhu@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 22:44:24 by hejiezhu          #+#    #+#             */
/*   Updated: 2024/01/12 22:37:33 by hzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int		index;
	char	*p_goal;
	int		string_len;

	index = 0;
	string_len = ft_strlen(s) + 1;
	while (index < string_len)
	{
		if (s[index] == (char) c)
		{
			p_goal = (char *)s + index;
			return (p_goal);
		}
		index++;
	}
	return (NULL);
}

// int main(void)
// {
//     char *word = "Hello";
//     char searchedChar = 'l';
//     char *foundChar;

//     foundChar = ft_strchr(word, searchedChar);

//    //printf("found char is: %c at @ %p \n", *foundChar, (void *)foundChar);
//    printf("found char is: %c \n", *foundChar);
// }