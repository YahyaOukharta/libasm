/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <youkhart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 20:11:16 by youkhart          #+#    #+#             */
/*   Updated: 2020/02/15 17:19:46 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

void	ft_lst_print(t_list *lst)
{
	int i;
	
	i = 1;
	while (lst)
	{
		printf("--------------------------------\n");
		printf("Element %d: %p\n", i, lst);
		printf("\tContent : %s\n", lst->content);
		printf("\tNext    : %p\n", lst->next);
		printf("--------------------------------\n");
		lst = lst->next;
		i++;
	}
}

t_list	*ft_list_new(void *content)
{
	t_list *new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (0);
	new->content = content;
	new->next = NULL;
	return (new);
}

int		main(int ac, char **av)
{
	t_list *list;

	list = ft_list_new("hello world!");
	ft_lst_print(list);
	printf("Size = %d\n", ft_list_size(list));
/*
	ft_list_push_front(&list, ft_list_new("Second node !!"));
	ft_list_push_front(&list, ft_list_new("Third node !!"));
	ft_list_push_front(&list, ft_list_new("Fourth node !!"));
	ft_lst_print(list);
	printf("Size = %d\n", ft_list_size(list));
*/
	return (0);
}