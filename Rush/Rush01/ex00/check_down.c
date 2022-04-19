/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_down.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algeorge <algeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 15:47:52 by algeorge          #+#    #+#             */
/*   Updated: 2022/03/20 15:47:54 by algeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	edit_value(int **tab, int row, int col, int value);
int		check_for_nb(int **tab, char type, int index, int value);

void	check_col_down_two(int **tab, int col, int can_guess)
{
	if (tab[0][col] == 4)
	{
		edit_value(tab, 3, col, 3);
		if (can_guess == 1)
		{
			if (!check_for_nb(tab, 'r', 2, 1) && !check_for_nb(tab, 'r', 1, 2))
			{
				edit_value(tab, 2, col, 1);
				edit_value(tab, 1, col, 2);
			}
			else
			{
				edit_value(tab, 1, col, 1);
				edit_value(tab, 2, col, 2);
			}
		}
	}
	else if (tab[0][col] == 2 && tab[1][col] == 1)
	{
		edit_value(tab, 2, col, 4);
		edit_value(tab, 3, col, 3);
	}
}

void	check_col_down_three(int **tab, int col)
{
	if (tab[3][col] == 2 && tab[0][col] == 1)
	{
		edit_value(tab, 2, col, 3);
		edit_value(tab, 1, col, 4);
	}
	else if (tab[2][col] == 3 && tab[1][col] == 4)
	{
		edit_value(tab, 3, col, 2);
		edit_value(tab, 0, col, 1);
	}
	else if (tab[3][col] == 1 && tab[0][col] == 4)
	{
		edit_value(tab, 2, col, 3);
		edit_value(tab, 1, col, 2);
	}
	else if (tab[0][col] == 1 && tab[1][col] == 4)
	{
		edit_value(tab, 2, col, 3);
		edit_value(tab, 3, col, 2);
	}
}

void	check_col_down_four(int **tab, int col)
{
	int	i;

	i = -1;
	while (++i < 4)
		edit_value(tab, 3 - i, col, i + 1);
}

int	check_col_down(int **tab, int col, int nbcrates, int can_guess)
{
	if (nbcrates == 1)
		edit_value(tab, 3, col, 4);
	else if (nbcrates == 4)
		check_col_down_four(tab, col);
	else if (nbcrates == 3)
		check_col_down_three(tab, col);
	else if (nbcrates == 2)
		check_col_down_two(tab, col, can_guess);
	else
		return (0);
	return (1);
}
