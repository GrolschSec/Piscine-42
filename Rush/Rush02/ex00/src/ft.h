/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 21:50:30 by ilinhard          #+#    #+#             */
/*   Updated: 2022/03/27 20:34:48 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_H
# define FT_H

int			ft_power(unsigned int nb);
int			ft_check_number_of_inputs(int number_of_inputs);
char		**ft_parsing(char *file_name, char **tab);
void		result(unsigned int nb, char **tab, int power);
void		ft_swap(char **s1, char **s2);
void		ft_sort_tab(char **tab, int tab_size);
long int	ft_atoi(char *inputs);
#endif
