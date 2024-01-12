/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hejiezhu <hejiezhu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 23:01:50 by hejiezhu          #+#    #+#             */
/*   Updated: 2024/01/09 18:29:23 by hejiezhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <errno.h>

void	ft_putchar_fd(char c, int fd)
{
	ssize_t		success;
	const void	*buf;

	buf = &c;
	success = write(fd, buf, 1);
	if (success != (ssize_t)fd)
	{
		errno = ENOMEM;
	}
}

// int	main(void)
// {
// 	char c;
// 	int fd;

// 	fd = 3;
// 	c = 'c';
// 	ft_putchar_fd(c,fd);
// 	return (0);
// }