/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bxavier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:57:19 by bxavier-          #+#    #+#             */
/*   Updated: 2024/08/10 21:05:16 by bxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}
/*
int	main(void)
{
	int	a1;
	int	b1;
	int	*aptr;
	int	*bptr;

	a1 = 16;
	b1 = 2;
	aptr = &a1;
	bptr = &b1;
	ft_ultimate_div_mod(aptr, bptr);
	printf("%d\n", *aptr);
	printf("%d\n", *bptr);
	return (0);
}*/
