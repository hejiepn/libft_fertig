/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhu <hzhu@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:03:41 by hzhu              #+#    #+#             */
/*   Updated: 2024/01/12 22:36:22 by hzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static void	ft_needlecheck(const char *haystack, char **n, size_t p_len)
{
	char	*h;

	h = (char *)haystack;
	while (**n && *h == **n && (p_len) > 0)
	{
		h++;
		(*n)++;
		(p_len)--;
	}
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*n;
	size_t	tmp_len;

	if (ft_strlen(needle) == 0)
	{
		return ((char *)haystack);
	}
	while (len > 0 && *haystack)
	{
		if (*haystack == *needle)
		{
			n = (char *)needle;
			tmp_len = len;
			ft_needlecheck(haystack, &n, tmp_len);
			if ((*n) == '\0')
			{
				return ((char *)haystack);
			}
		}
		haystack++;
		len--;
	}
	return (NULL);
}

// int main(void)
// {
// 	char haystack[30] = "aaabcabcd";
// 	char *ptr;

// 	// if(ft_strnstr(haystack, "abcd", 9) == haystack + 5)
// 	// {
// 	// 	printf("OK\n");
// 	// }
// 	// else
// 	// {
// 	// 	printf("KO\n");
// 	// }

// 	ptr = ft_strnstr(haystack, "abcd", 9);

// 	printf("ptr is: %s \n", ptr);
// }