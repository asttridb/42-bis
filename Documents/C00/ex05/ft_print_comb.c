/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaulat <abeaulat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:42:03 by abeaulat          #+#    #+#             */
/*   Updated: 2022/07/20 17:36:24 by abeaulat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x, char y, char z)
{
	write (1, &x, 1);
	write (1, &y, 1);
	write (1, &z, 1);
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = 0;
	while (x <= 7)
	{
		y = x + 1;
		while (y <= 8)
		{
			z = y + 1;
			while (z <= 9)
			{
				ft_putchar(x, y, z);
				if (x != 7)
				{
					write (1, ", ", 2);
				}
				z++;
			}
			y++;
		}
		x++;
	}
}

int	main(void)
{
	ft_print_comb( char x, char y, char z);
	return(0);
}