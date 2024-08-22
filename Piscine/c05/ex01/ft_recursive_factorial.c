/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bxavier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:25:01 by bxavier-          #+#    #+#             */
/*   Updated: 2024/08/18 18:50:32 by bxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		factorial = nb * ft_recursive_factorial(nb - 1);
	}
	return (factorial);
}
/*
int	main(void)
{
	printf("%d", ft_recursive_factorial(15));
	return (0);
}*/
