/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 10:10:30 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/12 20:08:15 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	line(int largeur, char a, char b, char c)
{
	int	i;

	if (largeur == 1)
	{
		ft_putchar(a);
	}
	else if (largeur == 2)
	{
		ft_putchar(a);
		ft_putchar(c);
	}
	else if (largeur > 2)
	{
		i = 0;
		ft_putchar(a);
		while (i != largeur - 2)
		{
			ft_putchar(b);
			i++;
		}
		ft_putchar(c);
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (y == 1 || y == 2)
	{
		while (i != y)
		{
			line(x, 'A', 'B', 'C');
			ft_putchar('\n');
			i++;
		}
	}
	else if (y > 2)
	{
		line(x, 'A', 'B', 'C');
		ft_putchar('\n');
		while (i != y - 2)
		{
			line(x, 'B', ' ', 'B');
			ft_putchar('\n');
			i++;
		}
		line(x, 'A', 'B', 'C');
		ft_putchar('\n');
	}
}
