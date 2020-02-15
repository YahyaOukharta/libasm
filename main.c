/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <youkhart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 17:51:55 by youkhart          #+#    #+#             */
/*   Updated: 2020/02/15 17:27:30 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int		main(void)
{
	char *str;
	char *buf;
	char *out;
	char *tmp;
	int c;

	//ft_strlen
	printf("\n \033[1;32m[+] \033[0m ft_strlen :\n\n");

	str = "";
	printf("Input : %-20s | output : %-20zu\n", str, ft_strlen(str));

	str = "hello";
	printf("Input : %-20s | output : %-20zu\n", str, ft_strlen(str));

	str = "0123456789";
	printf("Input : %-20s | output : %-20zu\n", str, ft_strlen(str));
	//

	//ft_strcpy
	printf("\n \033[1;32m[+] \033[0m ft_strcpy :\n\n");

		//null cases
	buf = calloc(20 ,1);
	printf("  -> NULL cases: \n");

	str = (void *)0;
	printf("dst : %-20s | src : %-20s | output : %-20s\n", buf, str, ft_strcpy(buf, str));
	
	str = (void *)0;
	printf("dst : %-20s | src : %-20s | output : %-20s\n", (void *)0, str, ft_strcpy((void *)0, str));

	str = "hello world";
	printf("dst : %-20s | src : %-20s | output : %-20s\n\n", (void *)0, str, ft_strcpy((void *)0, str));
	free(buf);

		//common cases
	printf("  -> common cases: \n");
	buf = calloc(20, 1);

	str = "1234567890";
	tmp = ft_strdup(buf);
	printf("dst : %-20s | src : %-20s | output : %-20s\n", tmp, str, ft_strcpy(buf, str));

	str = "hello";
	tmp = ft_strdup(buf);
	printf("dst : %-20s | src : %-20s | output : %-20s\n", tmp, str, ft_strcpy(buf, str));

	str = "12345678912345678";
	tmp = ft_strdup(buf);
	printf("dst : %-20s | src : %-20s | output : %-20s\n", tmp, str, ft_strcpy(buf, str));
	//

	//ft_strcmp
	printf("\n \033[1;32m[+] \033[0m ft_strcmp :\n\n");

	printf("s1  : %-20s | s2  : %-20s | output : %-20d\n", "", "1", ft_strcmp("", "1"));

	printf("s1  : %-20s | s2  : %-20s | output : %-20d\n", "1", "", ft_strcmp("1", ""));

	printf("s1  : %-20s | s2  : %-20s | output : %-20d\n", "\0", "\200", ft_strcmp("\0", "\200"));

	printf("s1  : %-20s | s2  : %-20s | output : %-20d\n", "aaab", "aaaa", ft_strcmp("aaab", "aaaa"));

	printf("s1  : %-20s | s2  : %-20s | output : %-20d\n", "aaaaaaaa", "aaaa", ft_strcmp("aaaaaaaa", "aaaa"));

	printf("s1  : %-20s | s2  : %-20s | output : %-20d\n", "baab", "aaaa", ft_strcmp("baab", "aaaa"));
	//

	//ft_write
	printf("\n \033[1;32m[+] \033[0m ft_write : \n\n");

	str = "hello, world!";
	c = 5;
	printf("fd : 1 | buf : %-20s | count = %d\n\toutput : <", str, c);
	fflush(stdout);
	ft_write(1, str, c);

	c = 13;
	printf(">\nfd : 1 | buf : %-20s | count = %d\n\toutput : <", str, c);
	fflush(stdout);
	ft_write(1, str , c);
	printf(">\n");
	//

	//ft_read
	printf("\n \033[1;32m[+] \033[0m ft_read : \n\n");

	str = "libasm.h";
	int fd = open(str, O_RDONLY);
	buf = calloc(900, 1);

	c = 890;
	printf("Opened file : '%s' | count = %d | buf : \n\n",str, c);
	fflush(stdout);
	ft_read(fd, buf, 891);
	ft_write(1, buf, 891);

	c = 77;
	printf("\nOpened file : '%s' | count = %d | buf : \n",str, c);
	fflush(stdout);
	ft_read(fd, buf, c);
	ft_write(1, buf, c);
	free(buf);
	//

	//ft_strdup
	printf("\n \033[1;32m[+] \033[0m ft_strdup : \n\n");
	str = "";
	tmp = ft_strdup(str);
	printf("\nsrc : %-20s | new string : %-20s \n", str, tmp);

	str = "hello";
	tmp = ft_strdup(str);
	printf("\nsrc : %-20s | new string : %-20s \n", str, tmp);

	str = calloc(400, 1);
	str = "0123456789";
	tmp = ft_strdup(str);
	printf("\nsrc : %-20s | new string : %-20s \n", str, tmp);
	//
	return (0);
}
