/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaulat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:36:05 by abeaulat          #+#    #+#             */
/*   Updated: 2022/07/20 11:05:30 by abeaulat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a)
{
	write (1, '&a', 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= '98')
	{
		y = x + 1;
		while (y <= '99')
		{
			ft_putchar(x / 10 + 48);
			ft_putchar(x % 10 + 48);
			ft_putchar(' ');
			ft_putchar(y / 10 + 48);
			ft_putchar(y % 10 + 48);
			if (x < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}	
			y++;
		}
		x++;
	}
}
