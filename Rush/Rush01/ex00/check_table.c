/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_table.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algeorge <algeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 12:32:55 by algeorge          #+#    #+#             */
/*   Updated: 2022/03/20 12:32:58 by algeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_row_left(int **tab, int row, int nbcrates);
int	check_row_right(int **tab, int row, int nbcrates);
int	check_col_down(int **tab, int col, int nbcrates);
int	check_col_up(int **tab, int col, int nbcrates);

void	edit_value(int **tab, int row, int col, int value)
{
	if (tab[row][col] == 0)
		tab[row][col] = value;
}

int	check_for_nb(int **tab, char type, int index, int value)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (type == 'r')
		{
			if (tab[index][i] == value)
				return (1);
		}
		else
		{
			if (tab[i][index] == value)
				return (1);
		}
		i++;
	}
	return (0);
}

int	solve_row(int **tab, int row)
{
	int	total;
	int	n;
	int	empty;
	int	i;

	i = 0;
	total = 10;
	n = 0;
	while (i < 4)
	{
		total -= tab[row][i];
		if (tab[row][i] == 0)
		{
			n++;
			empty = i;
		}
		i++;
	}
	if (n != 1)
		return (0);
	tab[row][empty] = total;
	return (1);
}

int	solve_col(int **tab, int col)
{
	int	total;
	int	n;
	int	empty;
	int	i;

	i = 0;
	total = 10;
	n = 0;
	while (i < 4)
	{
		total -= tab[i][col];
		if (tab[i][col] == 0)
		{
			n++;
			empty = i;
		}
		i++;
	}
	if (n != 1)
		return (0);
	tab[empty][col] = total;
	return (1);
}

int	check_last_one(int **tab)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		solve_row(tab, i);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		solve_col(tab, i);
		i++;
	}
	return (1);
}
