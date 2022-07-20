/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaji <snaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 12:08:06 by snaji             #+#    #+#             */
/*   Updated: 2022/07/10 15:35:49 by snaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ligne_simple(int x)
{
	int	i;

	i = 0;
	if (x == 1)
		ft_putchar('*');
	else if (x == 2)
	{
		ft_putchar('*');
		ft_putchar('*');
	}
	else
	{
		ft_putchar('*');
		while (i < x - 2)
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar('*');
	}
	ft_putchar('\n');
}

void	ligne_debut(int x)
{
	int	i;

	i = 0;
	if (x == 1)
		ft_putchar('/');
	else if (x == 2)
	{
		ft_putchar('/');
		ft_putchar('\\');
	}
	else
	{
		ft_putchar('/');
		while (i < x - 2)
		{
			ft_putchar('*');
			i++;
		}
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	ligne_fin(int x)
{
	int	i;

	i = 0;
	if (x == 1)
		ft_putchar('\\');
	else if (x == 2)
	{
		ft_putchar('\\');
		ft_putchar('/');
	}
	else
	{
		ft_putchar('\\');
		while (i < x - 2)
		{
			ft_putchar('*');
			i++;
		}
		ft_putchar('/');
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
