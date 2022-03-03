/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyesilte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:17:11 by eyesilte          #+#    #+#             */
/*   Updated: 2022/03/02 18:17:12 by eyesilte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	while (src[a] != '\0')
		a++;
	if (dstsize != 0)
	{
		while (src[b] != '\0' && b < (dstsize - 1))
		{
			dst[b] = src[b];
			b++;
		}
		dst[b] = '\0';
	}
	return (a);
}
/*
int main(void)
{
    char dest[] = "esma";
    char source[] = "nurr";
    printf("%zu", ft_strlcpy(&dest[0] , &source[0] , 5));
    int i= 0;
    while (dest[i] != '\0') {
        printf("%c", dest[i]);
        i++;
    }
  
}
*/
