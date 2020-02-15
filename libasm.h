/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <youkhart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 20:04:36 by youkhart          #+#    #+#             */
/*   Updated: 2020/02/14 18:17:05 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>
# include <stdio.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

char				*ft_strcpy(char *dst, const char *src);
size_t				ft_strlen(const char *str);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strdup(const char *str);
ssize_t				ft_write(int fd, const void *buf, size_t n_bytes);
ssize_t				ft_read(int fd, const void *buf, size_t n_bytes);
int					ft_atoi(const char *str);
int					ft_atoi_base(const char *str, const char *base);
int					check_double(const char *str);
int					ft_list_size(t_list *lst);
void				ft_list_push_front(t_list **alst, t_list *new);

#endif
