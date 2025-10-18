/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 10:27:26 by malavaud          #+#    #+#             */
/*   Updated: 2025/10/18 15:17:15 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list *tmp;
	int	i;

	tmp = lst;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

//#include <stdio.h>
//int main(void)
//{
//	t_list	*a = ft_lstnew("aaa");
//	t_list	*b = ft_lstnew("bbb");
//	t_list	*c = ft_lstnew("ccc");

//	a->next = b;
//	b->next = c;
//	int	size = ft_lstsize(a);
//	printf("%d", size);

//	free(a);
//	free(b);
//	free(c);

//	return (0);	
//}