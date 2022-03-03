/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyesilte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:06:37 by eyesilte          #+#    #+#             */
/*   Updated: 2022/03/02 18:06:39 by eyesilte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
int main(void)
{
	t_list *a = NULL;
	ft_lstadd_front(&a, ft_lstnew((void *)13));
	ft_lstadd_front(&a, ft_lstnew((void *)56));
	printf("%d" , ft_lstlast(a)->content);
	return(0);
}
*/
