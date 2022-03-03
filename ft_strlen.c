/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyesilte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:17:47 by eyesilte          #+#    #+#             */
/*   Updated: 2022/03/02 18:17:49 by eyesilte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *b)
{
	size_t	say;

	say = 0;
	while (*b != '\0')
	{
		say++;
		b++;
	}
	return (say);
}
/*
int main(void)
{
    char a[] = "esmaasdfgh";
    printf("%d", ft_strlen(&a[0]));
    return(0);
}
*/
