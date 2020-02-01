/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 20:11:16 by youkhart          #+#    #+#             */
/*   Updated: 2020/02/02 00:28:09 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int main(int ac, char **av)
{
	char *buf;
	char s1[20];
	char s2[20];
	char *ptr;

	buf = "hello, world!";
	
	/*

	* ft_strlen *
	printf	("%zu\n",ft_strlen(buf));
	printf("%zu\n",ft_strlen(""));
	printf("%zu\n",ft_strlen("123456"));
	// printf("%zu\n",ft_strlen(NULL)); //this will segfault

	* ft_strcpy *
	ptr = ft_strcpy(s1, buf);
	printf("%s\n", s1);
	printf("%s\n", ptr);
	printf("%s\n", ptr);
	*/

	
	printf("%d\n", ft_atoi("				2147483647asdas"));

	return (0);
}
