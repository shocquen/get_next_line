/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:18:48 by shocquen          #+#    #+#             */
/*   Updated: 2021/12/01 10:53:51 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h> //!

char	*get_next_line(int fd)
{
	char	buff[BUFFER_SIZE];
	char	*str;
	int		csr;

	str = (char *)malloc(sizeof(*str));
	if (!str)
		return (NULL);
	csr = 1;
	while (csr > 0)
	{
		csr = read(fd, buff, BUFFER_SIZE - 1);
		buff[csr] = 0;
		str = ft_strjoin(str, buff);
	}
	close(fd);
	return (str);
}
