/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <youkhart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 20:11:16 by youkhart          #+#    #+#             */
/*   Updated: 2020/02/11 17:50:22 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../corr/ft_printf/ft_printf.h"
#include "libasm.h"

void	ft_lst_print(t_list *lst)
{
	int i = 1;

	while (lst)
	{
		printf("--------------------------------\n");
		printf("element %d: %p\n", i, lst);
		printf("\tcontent : %s\n", lst->content);
		printf("\tnext    : %p\n", lst->next);
		printf("--------------------------------\n");
		lst = lst->next;
	}
}
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
/*	
	t_list *e1 = ft_lstnew(buf);
	t_list *e2 = ft_lstnew(buf + 2);
	t_list *e3 = ft_lstnew(buf + 4);	
	t_list *e4 = ft_lstnew(buf + 6);
	ft_lst_add_front(&e1, e2);
   ft_lst_add_front(&e1, e3);
   //ft_lst_add_front(&e1, e1);
   ft_lst_print(e1);
	printf("%d\n",ft_lst_size(e1)); 
*/

	printf("%d\n", ft_atoi_base("a1b2c","0123456789abcdef"));
	return (0);
}