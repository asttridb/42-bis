/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaji <snaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:01:41 by snaji             #+#    #+#             */
/*   Updated: 2022/07/10 15:35:19 by snaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ligne_simple(int x)
{
	int	i;

	i = 0;
	if (x == 1)
		ft_putchar('B');
	else if (x == 2)
	{
		ft_putchar('B');
		ft_putchar('B');
	}
	else
	{
		ft_putchar('B');
		while (i < x - 2)
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	ligne_debut(int x)
{
	int	i;

	i = 0;
	if (x == 1)
		ft_putchar('A');
	else if (x == 2)
	{
		ft_putchar('A');
		ft_putchar('A');
	}
	else
	{
		ft_putchar('A');
		while (i < x - 2)
		{
			ft_putchar('B');
			i++;
		}
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	ligne_fin(int x)
{
	int	i;

	i = 0;
	if (x == 1)
		ft_putchar('C');
	else if (x == 2)
	{
		ft_putchar('C');
		ft_putchar('C');
	}
	else
	{
		ft_putchar('C');
		while (i < x - 2)
		{
			ft_putchar('B');
			i++;
		}
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x > 0 && y > 0)
	{
		i = 0;
		if (y == 1)
		{
			ligne_debut(x);
		}
		else if (y == 2)
		{
			ligne_debut(x);
			ligne_fin(x);
		}
		else
		{
			ligne_debut(x);
			while (i < y - 2)
			{
				ligne_simple(x);
				i++;
			}
			ligne_fin(x);
		}
	}
}
