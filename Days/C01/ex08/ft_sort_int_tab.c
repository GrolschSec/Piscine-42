/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 20:33:55 by rlouvrie          #+#    #+#             */
/*   Updated: 2022/03/13 22:38:45 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	k;
	int	temp;

	i = 0;
	k = 0;
	while (i < size)
	{
		if (tab[i] < tab[k])
		{
			temp = tab[k];
			tab[k] = tab[i];
			tab[i] = temp;
		}
		else if (k == size - 1)
		{
			i++;
			k = 0;
		}
		else
			k++;
	}
}
