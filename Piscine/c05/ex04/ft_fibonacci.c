/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bxavier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 19:39:28 by bxavier-          #+#    #+#             */
/*   Updated: 2024/08/19 22:07:29 by bxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_fibonacci(int index)
{
	int	fib;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
	{
		fib = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (fib);
}
/*
int	main(void)
{
	printf("%d", ft_fibonacci(10));
}*/
