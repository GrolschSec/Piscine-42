/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_right.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algeorge <algeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 15:47:17 by algeorge          #+#    #+#             */
/*   Updated: 2022/03/20 15:47:19 by algeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	edit_value(int **tab, int row, int col, int value);
int		check_for_nb(int **tab, char type, int index, int value);

void	check_row_right_two(int **tab, int row, int can_guess)
{
	if (tab[row][0] == 4)
	{
		edit_value(tab, row, 3, 3);
		if (can_guess == 1)
		{
			if (!check_for_nb(tab, 'c', 1, 1) && !check_for_nb(tab, 'c', 2, 2))
			{
				edit_value(tab, row, 1, 1);
				edit_value(tab, row, 2, 2);
			}
			else
			{
				edit_value(tab, row, 2, 1);
				edit_value(tab, row, 1, 2);
			}
		}
	}
	else if (tab[row][0] == 2 && tab[row][1] == 1)
	{
		edit_value(tab, row, 2, 4);
		edit_value(tab, row, 3, 3);
	}
}

void	check_row_right_three(int **tab, int row)
{
	if (tab[row][3] == 2 && tab[row][0] == 1)
	{
		edit_value(tab, row, 2, 3);
		edit_value(tab, row, 1, 4);
	}
	else if (tab[row][2] == 3 && tab[row][1] == 4)
	{
		edit_value(tab, row, 3, 2);
		edit_value(tab, row, 0, 1);
	}
	else if (tab[row][3] == 1 && tab[row][0] == 4)
	{
		edit_value(tab, row, 2, 3);
		edit_value(tab, row, 1, 2);
	}
	else if (tab[row][0] == 1 && tab[row][1] == 4)
	{
		edit_value(tab, row, 2, 3);
		edit_value(tab, row, 3, 2);
	}
}

void	check_row_right_four(int **tab, int row)
{
	int	i;

	i = -1;
	while (++i < 4)
		edit_value(tab, row, 3 - i, i + 1);
}

int	check_row_right(int **tab, int row, int nbcrates, int can_guess)
{
	if (nbcrates == 1)
		edit_value(tab, row, 3, 4);
	else if (nbcrates == 4)
		check_row_right_four(tab, row);
	else if (nbcrates == 3)
		check_row_right_three(tab, row);
	else if (nbcrates == 2)
		check_row_right_two(tab, row, can_guess);
	else
		return (0);
	return (1);
}
