/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyesilte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:07:57 by eyesilte          #+#    #+#             */
/*   Updated: 2022/03/02 18:07:59 by eyesilte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	counter;

	counter = 1;
	while (counter <= n)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
		counter++;
	}
	return (NULL);
}

/*
int main(void) {
   char str[] = "esma";
  

   printf("%p",ft_memchr(&str[0], 'e' , 3));

   return(0);
}
*/
