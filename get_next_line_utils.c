/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:09:59 by shocquen          #+#    #+#             */
/*   Updated: 2021/12/01 13:44:24 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h> //!

/* ft_strlen */

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*ret;
	unsigned int	i;
	unsigned int	j;

	if (!s1 || !s2)
		return (NULL);
	ret = (char *)malloc(sizeof(*ret) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!ret)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ret[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		ret[j + i] = s2[j];
		j++;
	}
	ret[j + i] = 0;
	return (ret);
}

t_node	*ft_lstadd_front(t_node *lst, char const *str)
{
	t_node			*ret;
	unsigned int	i;
	unsigned int	j;

	if (!str)
		return (NULL);
	ret = (t_node *)malloc(sizeof(*ret));
	if (ret)
	{
		ret->index = 1;
		ret->line = "str";
		ret->overflow = "wait";
		ret->next = NULL;
	}
	return (ret);
}
