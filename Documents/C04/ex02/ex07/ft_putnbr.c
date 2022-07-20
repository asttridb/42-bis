/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaulat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:57:53 by abeaulat          #+#    #+#             */
/*   Updated: 2022/07/19 11:34:46 by abeaulat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <unistd.h>

int	ft_putchar(char c)
{	
	write (1, &c, 1);
	return (0);
}

void	ft_putnbr(int nb)
{
	unsigned int u_nb;

	if (nb < 0)
	{
		ft_putchar('-');
		u_nb = -nb;
	}
	else
		u_nb = nb;
	if (u_nb >= 10)
	{
		ft_putnbr(u_nb / 10);
		ft_putnbr(u_nb % 10);
	}
	if (u_nb < 10)
		ft_putchar(u_nb + 48);
}
