/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:14:46 by rlouvrie          #+#    #+#             */
/*   Updated: 2022/03/16 02:17:45 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 31))
			return (0);
		i++;
	}
	return (1);
}

/*int main()
{
	char *str;

	str = "Hell\nodkdk";
	printf("%d", ft_str_is_printable(str));
	return (0);
}*/
