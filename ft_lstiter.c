/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyesilte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:03:55 by eyesilte          #+#    #+#             */
/*   Updated: 2022/03/02 18:03:57 by eyesilte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void f(void *a)
{
    printf("%d" , (int)a);
}
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (lst && f)
	{
		while (lst != NULL)
		{
			tmp = lst->next;
			f(lst->content);
			lst = tmp;
		}
	}
}
/*
int main(void)
{
    t_list *b = ft_lstnew((void *)34);
    ft_lstadd_back(&b , ft_lstnew((void *)56));
    ft_lstiter(b , f);
    return(0);
}
*/
