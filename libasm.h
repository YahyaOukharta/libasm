/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 20:04:36 by youkhart          #+#    #+#             */
/*   Updated: 2020/02/02 00:28:56 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dst,const char *src);
size_t	ft_strlen(const char *str);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strdup(const char *str);
ssize_t	ft_write(int fd, const void *buf, size_t n_bytes);
ssize_t	ft_read(int fd, const void *buf, size_t n_bytes);
int		ft_atoi(const char *str);
