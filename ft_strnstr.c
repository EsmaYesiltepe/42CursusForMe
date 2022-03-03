/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyesilte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:46:20 by eyesilte          #+#    #+#             */
/*   Updated: 2022/03/02 18:40:29 by eyesilte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[a] != '\0')
	{
		b = 0;
		while (haystack[a + b] == needle[b] && (a + b) < len)
		{
			if (needle[b + 1] == '\0')
				return ((char *) &haystack[a]);
			b++;
		}
		a++;
	}
	return (NULL);
}
/*
int main(void)
{
    char hs[] = "asman";
    char nd[] = "as";
    printf("%s",ft_strnstr(&hs[0] , &nd[0] , 3));
  
}
*/
