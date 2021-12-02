/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:23:30 by shocquen          #+#    #+#             */
/*   Updated: 2021/12/02 14:34:14 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFFER_SIZE 5

# include <unistd.h>
# include <stdlib.h>

int		ft_strlen(const char *s);
int		ft_strchr(const char *str, char c);
char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char const *s2);

#endif