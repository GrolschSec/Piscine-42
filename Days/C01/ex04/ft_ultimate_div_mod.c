/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 18:41:31 by rlouvrie          #+#    #+#             */
/*   Updated: 2022/03/13 19:00:46 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	swap_div;
	int	swap_mod;

	swap_div = *a / *b;
	swap_mod = *a % *b;
	*a = swap_div;
	*b = swap_mod;
}
