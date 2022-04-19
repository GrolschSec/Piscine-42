/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algeorge <algeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:57:59 by algeorge          #+#    #+#             */
/*   Updated: 2022/03/19 13:58:01 by algeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	ft_print_tab(int **tab);
int		check_row_left(int **tab, int row, int nbcrates, int can_guess);
int		check_row_right(int **tab, int row, int nbcrates, int can_guess);
int		check_col_up(int **tab, int col, int nbcrates, int can_guess);
int		check_col_down(int **tab, int col, int nbcrates, int can_guess);
int		check_last_one(int **tab);

int	**generate_table(int **tab, int hsize, int vsize)
{
	int	i;
	int	j;

	i = 0;
	tab = (int **)malloc(vsize * sizeof(int *));
	while (i < vsize)
	{
		j = 0;
		tab[i] = (int *)malloc(hsize * sizeof(int));
		while (j < hsize)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	return (tab);
}

void	check_rows(int **tab, int params[16], int param, int can_guess)
{
	int	i;

	i = 8;
	while (i < 12)
	{
		if (params[i] == param)
			check_row_left(tab, i % 4, params[i], can_guess);
		i++;
	}
	while (i < 16)
	{
		if (params[i] == param)
			check_row_right(tab, i % 4, params[i], can_guess);
		i++;
	}
}

void	check_cols(int **tab, int params[16], int param, int can_guess)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (params[i] == param)
			check_col_up(tab, i % 4, params[i], can_guess);
		i++;
	}
	while (i < 8)
	{
		if (params[i] == param)
			check_col_down(tab, i % 4, params[i], can_guess);
		i++;
	}
}

int	check_table(int **tab, int params[16], int order[4], int can_guess)
{
	int	i;
	int	j;

	i = 0;
	while (i < 16)
	{
		can_guess = i > 7;
		check_rows(tab, params, order[i % 4], can_guess);
		check_cols(tab, params, order[i % 4], can_guess);
		check_last_one(tab);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tab[i][j] == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	rush01(int params[16])
{
	int	i;
	int	**tab;
	int	order[4];

	order[0] = 4;
	order[1] = 1;
	order[2] = 3;
	order[3] = 2;
	i = 0;
	tab = 0;
	tab = generate_table(tab, 4, 4);
	if (check_table(tab, params, order, 0) == 0)
		return (0);
	ft_print_tab(tab);
	return (1);
}
