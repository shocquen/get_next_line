/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:23:30 by shocquen          #+#    #+#             */
/*   Updated: 2021/12/01 10:58:28 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFFER_SIZE 5

# include <unistd.h>
# include <stdlib.h>

typedef struct s_node
{
	int				index;
	char			*line;
	char			*overflow;
	struct s_node	*next;
}	t_node;

char	*get_next_line(int fd);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_create_tab(int fd);
char	*ft_filedup(int fd);
char	**ft_split(char const *s, char c);

#endif