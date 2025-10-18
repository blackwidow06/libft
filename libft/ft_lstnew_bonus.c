/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 09:43:03 by malavaud          #+#    #+#             */
/*   Updated: 2025/10/18 10:11:04 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newl;

	newl = malloc(sizeof(t_list));
	if (!newl)
		return (NULL);
	newl->content = content;
	newl->next = NULL;
	return (newl);
}
//#include <stdio.h>

//int main(void)
//{
//	t_list *node;

//	node = ft_lstnew("Salut !");
//	printf("Content : %s\n", (char *)node->content);
//	printf("Next : %p\n", node->next);

//	free(node);
//	return 0;
//}