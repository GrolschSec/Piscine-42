/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 22:29:15 by rlouvrie          #+#    #+#             */
/*   Updated: 2022/03/09 22:39:06 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	result;

	if (n < 0)
	{
		result = 'N';
		write(1, &result, 1);
	}
	else
	{
		result = 'P';
		write(1, &result, 1);
	}
}
