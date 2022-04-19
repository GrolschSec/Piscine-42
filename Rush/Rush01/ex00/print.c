/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algeorge <algeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:17:33 by algeorge          #+#    #+#             */
/*   Updated: 2022/03/20 11:17:35 by algeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_print_args(int *args, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putchar(args[i] + '0');
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void	ft_print_tab(int **tab)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar(tab[i][j] + '0');
			if (++j < 4)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		i++;
	}
}
