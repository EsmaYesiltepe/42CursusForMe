/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyesilte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:15:42 by eyesilte          #+#    #+#             */
/*   Updated: 2022/03/02 18:15:43 by eyesilte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	size_t	b;

	b = ft_strlen(s1);
	p = (char *)malloc((b + 1) * sizeof(char));
	if (!p)
		return (0);
	ft_memcpy(p, s1, b + 1);
	return (p);
}
/*
int main(void)
{
    char str1[] = "yeşiltepe";
    char *result = ft_strdup(&str1[0]);
    printf("%s" , result);
    return (0);
}

*/
