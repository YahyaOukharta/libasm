/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <youkhart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 17:51:55 by youkhart          #+#    #+#             */
/*   Updated: 2020/02/11 19:05:39 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libasm.h"
#include <stdlib.h>

int		main(void)
{
	char *str;
	char *buf;
	char *out;
	char *tmp;

	printf("\n   'ft_strlen':\n");
	str = "";
	printf("Input : %-20s | output : %-20zu\n", str, ft_strlen(str));
	str = "hello";
	printf("Input : %-20s | output : %-20zu\n", str, ft_strlen(str));
	str = "0123456789";
	printf("Input : %-20s | output : %-20zu\n", str, ft_strlen(str));

	//strcpy
	printf("\n   'ft_strcpy':\n");
	//null cases
	buf = calloc(1 ,20);
	printf("null cases: \n");
	str = (void *)0;
	printf("dst : %-20s | src : %-20s | output : %-20s\n", buf, str, ft_strcpy(buf, str));
	str = (void *)0;
	printf("dst : %-20s | src : %-20s | output : %-20s\n", (void *)0, str, ft_strcpy((void *)0, str));
	str = "hello world";
	printf("dst : %-20s | src : %-20s | output : %-20s\n", (void *)0, str, ft_strcpy((void *)0, str));
	//copy
	printf("normal cases: \n");
	buf = calloc(1, 20);
	str = "1234567890";
	tmp = ft_strdup(buf);
	printf("dst : %-20s | src : %-20s | output : %-20s\n", tmp, str, ft_strcpy(buf, str));
	str = "hello";
	tmp = ft_strdup(buf);
	printf("dst : %-20s | src : %-20s | output : %-20s\n", tmp, str, ft_strcpy(buf, str));	
	str = "12345678912345678";
	tmp = ft_strdup(buf);
	printf("dst : %-20s | src : %-20s | output : %-20s\n", tmp, str, ft_strcpy(buf, str));	

	//strcmp
	printf("\n   'ft_strcmp':\n");
	printf("s1  : %-20s | s2  : %-20s | output : %-20d\n", "", "1", ft_strcmp("", "1"));
	printf("s1  : %-20s | s2  : %-20s | output : %-20d\n", "1", "", ft_strcmp("1", ""));
	printf("s1  : %-20s | s2  : %-20s | output : %-20d\n", "aaaa", "aaaa", ft_strcmp("aaaa", "aaaa"));
	printf("s1  : %-20s | s2  : %-20s | output : %-20d\n", "aaab", "aaaa", ft_strcmp("aaab", "aaaa"));
	
	//write
	printf("\n   'ft_write': \n");
	str = "hello, world!";
	printf("fd : 1 | buf : %-20s | count ")
	write("")

	return (0);
}
