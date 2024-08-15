/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bxavier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 16:40:58 by bxavier-          #+#    #+#             */
/*   Updated: 2024/08/10 21:04:36 by bxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a1;
	int	b1;
	int	*aptr;
	int	*bptr;

	a1 = 100;
	b1 = 2;
	aptr = &a1;
	bptr = &b1;
	ft_div_mod(a1, b1, aptr, bptr);
	printf("%d\n", *aptr);
	printf("%d\n", *bptr);
	return (0);
}*/
