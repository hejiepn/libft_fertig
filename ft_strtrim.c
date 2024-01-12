/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzhu <hzhu@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 00:09:38 by hejiezhu          #+#    #+#             */
/*   Updated: 2024/01/12 22:42:55 by hzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int
	ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char
	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	if (!s1)
	{
		return (NULL);
	}
	start = 0;
	while (s1[start] && ft_char_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_char_in_set(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}

// int main() {
//     char original[] = "!Hello234234534432!";
//     char set[] = "Hel!lo"; // Alphanumerische Zeichen

//     char *trimmed = ft_strtrim(original, set);
//     if (trimmed) {
//         printf("Original: '%s'\n", original);
//         printf("Trimmed:  '%s'\n", trimmed);
//         free(trimmed); // Speicher freigeben
//     } else {
//         printf("Fehler beim Trimmen des Strings.\n");
//     }

//     return 0;
// }