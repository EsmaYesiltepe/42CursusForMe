/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyesilte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:12:18 by eyesilte          #+#    #+#             */
/*   Updated: 2022/03/02 18:12:25 by eyesilte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	a;

	a = 0;
	if (!dst && !src)
		return (0);
	while (a < n)
	{
		((unsigned char *)dst)[a] = ((unsigned char *)src)[a];
		a++;
	}
	return (dst);
}
/*
int main(void)
{
    char str1[] = "nur";
    char str2[] = "esma";
 
    ft_memcpy(&str1[0] , &str2[0] , 3);
    
    int a = 0;
    while (str1[a] != '\0')
    {
        printf("%c" , str1[a]);
        a++;
    }
}
*/
