/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hejiezhu <hejiezhu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:27:00 by hejiezhu          #+#    #+#             */
/*   Updated: 2024/01/09 23:13:56 by hejiezhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	index;

	index = 0;
	while (s[index] != '\0')
	{
		ft_putchar_fd(s[index], fd);
		index++;
	}
}

// int	main(void)
// {
// 	int fd;
// 	char *s = "hello world!";
// 	fd = open("poo.txt", O_RDWR | O_CREAT);
// 	printf("fd = %d\n", fd);
//     if (fd == -1) {
//         // print which type of error have in a code
//         printf("Error Number % d\n", errno);
//         // print program detail "Success or failure"
//         perror("Program");
//     }
// 	ft_putstr_fd(s, fd);
// 	return (0);
// }