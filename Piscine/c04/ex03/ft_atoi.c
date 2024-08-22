/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bxavier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 15:24:09 by bxavier-          #+#    #+#             */
/*   Updated: 2024/08/18 16:38:52 by bxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '\v' || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (str[i] - 48) + (result * 10);
		i++;
	}
	return (result * sign);
}
/*
int	main(void)
{
	printf("%d", ft_atoi("    ---++-++-+132432235sdf161"));
	return (0);
}*/
