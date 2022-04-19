/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algeorge <algeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:51:59 by algeorge          #+#    #+#             */
/*   Updated: 2022/03/19 13:52:03 by algeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_args(int *args, int size);
void	ft_putstr(char *str);
int		rush01(int params[16]);
int		ft_check_args(char *args, int *params_arr);

int	main(int argc, char **argv)
{
	int	params[16];
	int	l;

	l = 0;
	if (argc > 1)
		l = ft_check_args(argv[1], params);
	if (argc != 2 || l != 16)
	{
		ft_putstr("Error\n");
		return (1);
	}
	if (rush01(params) == 0)
	{
		ft_putstr("Error\n");
	}
}
