/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algeorge <algeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 10:49:27 by algeorge          #+#    #+#             */
/*   Updated: 2022/03/20 10:49:30 by algeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else if (c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_check_args(char *args, int *params_arr)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (args[i])
	{
		if (is_digit(args[i]))
			params_arr[n++] = args[i++] - '0';
		else if (is_space(args[i]))
			i++;
		else
			return (n);
	}
	return (n);
}
