/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhu <hzhu@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 22:44:24 by hejiezhu          #+#    #+#             */
/*   Updated: 2024/01/12 22:36:13 by hzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int		index;
	char	*p_goal;

	index = ft_strlen(s);
	while (index >= 0)
	{
		if (s[index] == (char) c)
		{
			p_goal = (char *)s + index;
			return (p_goal);
		}
		index--;
	}
	return (NULL);
}

// int main(void)
// {
//     char *word = "123456789";
//     char searchedChar = 'a';
//     char *foundCharBack;

//     foundCharBack = ft_strrchr(word, searchedChar);
//     //printf("found char is: %c at @ %p \n", *foundChar, (void *)foundChar);

//     printf("@ of foundCharBack is %p \n", (void *)foundCharBack);
//     printf("@ of word char is %p \n", (void *)word);
//     printf("last found char  is: %c \n", *foundCharBack);
//     return (0);
// }