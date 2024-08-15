/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bxavier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 15:55:59 by bxavier-          #+#    #+#             */
/*   Updated: 2024/08/10 21:03:21 by bxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main(void)
{
	int a = 9;
	int b = 5;
	int *aptr = &a;
	int *bptr = &b;	
	ft_swap(aptr, bptr);

	printf("%d\n", *aptr);
	printf("%d", *bptr);
	return (0);
}*/
