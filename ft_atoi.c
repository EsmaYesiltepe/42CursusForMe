/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyesilte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:53:09 by eyesilte          #+#    #+#             */
/*   Updated: 2022/03/03 19:45:21 by eyesilte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			sign;
	long int	number;

	sign = 1;
	number = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_isdigit(*str) == 1)
	{
		number = (*str - '0') + (number * 10);
		str++;
		if (number * sign > 2147483647)
			return (-1);
		if (number * sign < -2147483648)
			return (0);
	}
	return (number * sign);
}
/*
int main(void)
{
	const char str[] = "+42";
	printf("%d" , ft_atoi(&str[0]));

}
*/
