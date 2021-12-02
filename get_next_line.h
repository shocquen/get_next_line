/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:23:30 by shocquen          #+#    #+#             */
/*   Updated: 2021/12/02 12:14:17 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFFER_SIZE 5

# include <unistd.h>
# include <stdlib.h>

typedef struct s_node
{
	char			*content;
	int				offset;
	struct s_node	*next;
}	t_node;

char	*ft_strdup(const char *s1);
char	*get_next_line(int fd);
char	*ft_strjoin(char const *s1, char const *s2);
t_node	*insert_toqueue(t_node *lst, t_node *node);

#endif