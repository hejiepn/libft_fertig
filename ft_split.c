/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhu <hzhu@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 12:17:56 by hejiezhu          #+#    #+#             */
/*   Updated: 2024/01/12 22:41:55 by hzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <errno.h>

static int	ft_find_array_size(int str_index, char *s, int array_size, char c)
{
	while (str_index < ft_strlen((const char *)(s)))
	{
		if (s[str_index] != c)
		{
			array_size++;
			while (s[str_index] && s[str_index] != c)
				str_index++;
		}
		else
			str_index++;
	}
	return (array_size);
}

static void	fill_strings(char const *s, char **array_of_strings, \
char c, int array_size)
	{
	int	str_index;
	int	array_index;
	int	start;

	str_index = 0;
	array_index = 0;
	while (str_index < ft_strlen(s) && array_index < array_size)
	{
		if (s[str_index] != c)
		{
			start = str_index;
			while (s[str_index] && s[str_index] != c)
			{
				str_index++;
			}
			array_of_strings[array_index] = \
			ft_substr(s, start, str_index - start);
			array_index++;
		}
		else
		{
			str_index++;
		}
	}
	array_of_strings[array_index] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**array_of_strings;
	int		array_size;
	int		str_index;

	if (!s)
		return (NULL);
	array_size = 0;
	str_index = 0;
	array_size = ft_find_array_size(str_index, (char *)s, array_size, c);
	array_of_strings = (char **)malloc(sizeof(char *) * (array_size + 1));
	if (!array_of_strings)
	{
		errno = ENOMEM;
		return (NULL);
	}
	fill_strings(s, array_of_strings, c, array_size);
	return (array_of_strings);
}

// int	main(void)
// {
// 	char const	*s = "Hello World How Are You!";
// 	char		delimiter = ' ';
// 	char		**array_of_strings;
// 	int			str_index;

// 	array_of_strings = ft_split(s, delimiter);
// 	if (array_of_strings)
// 	{
// 		printf("Original string: %s \n", s);
// 		print_array_strings(array_of_strings);
// 		str_index = 0;
// 		while (array_of_strings[str_index] != NULL)
// 		{
// 			free(array_of_strings[str_index]);
// 			str_index++;
// 		}
// 		free(array_of_strings);
// 	}
// 	else
// 	{
// 		printf("Split failed or no strings found.\n");
// 	}
// 	return (0);
// }