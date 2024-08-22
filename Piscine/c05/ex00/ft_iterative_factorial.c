/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bxavier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:38:38 by bxavier-          #+#    #+#             */
/*   Updated: 2024/08/18 18:21:19 by bxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		factorial = factorial * nb;
		nb--;
	}
	return (factorial);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(9));
	return (0);
}*/
