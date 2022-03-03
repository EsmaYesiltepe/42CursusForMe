/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyesilte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:16:00 by eyesilte          #+#    #+#             */
/*   Updated: 2022/03/02 18:16:02 by eyesilte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		f(i, (s + i));
		i++;
	}
}
/*
void f(unsigned int a, char *b)
{
    unsigned int i;
    i = a;
    *b = *b + i;
}

int main(void)
{
    char str[] = "esma";
    ft_striteri(&str[0] , *f);
}
*/
