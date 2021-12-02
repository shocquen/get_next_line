/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:18:48 by shocquen          #+#    #+#             */
/*   Updated: 2021/12/02 12:14:51 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h> //!

t_node	*mknode(t_node *lst, char const *str)
{
	t_node			*node;

	node->content = ft_strdup(str);
	if (lst)
		node->offset = lst->offset + BUFFER_SIZE;
	lst = insert_toqueue(lst, node);
	return (node);
}

char	*get_next_line(int fd)
{
	char	buff[BUFFER_SIZE];
	char	*ret = "\n";
	t_node	*lst;
	int		csr;

	lst = NULL;
	csr = 1;
	while (csr > 0)
	{
		csr = read(fd, buff, BUFFER_SIZE - 1);
		buff[csr] = 0;
		lst = mknode(lst, buff);
	}
	close(fd);
	return (ret);
}

/* char	*get_next_line(int fd)
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
} */
