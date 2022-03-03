/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyesilte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:16:25 by eyesilte          #+#    #+#             */
/*   Updated: 2022/03/03 19:17:46 by eyesilte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	v;
	size_t	d;
	char	*ar;

	if (!s1 || !s2)
		return (NULL);
	d = ft_strlen(s1);
	v = 0;
	ar = (char *)malloc((d + ft_strlen(s2) + 1) * sizeof(char));
	if (!s1 || !s2 || !ar)
		return (0);
	ft_memcpy(ar, s1, d);
	while (s2[v] != '\0')
	{
		ar[d] = s2[v];
		d++;
		v++;
	}
	ar[d] = '\0';
	return (ar);
}
/*
int main(void)
{
	char str1[] = "sema";
	char str2[]= "nur";
	printf("%s" , ft_strjoin(&str1[0] , &str2[0]));
}
*/
