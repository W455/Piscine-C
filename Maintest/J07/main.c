/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukrifa <oukrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 01:05:57 by oukrifa           #+#    #+#             */
/*   Updated: 2017/03/20 16:23:36 by oukrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char **ft_split_whitespaces(char *str);
void ft_print_words_tables(char **tab);

void	ft_putchar(char);

int		main(int ac, char **av)
{
	if (ac >= 2)
	{
		ft_print_words_tables(ft_split_whitespaces(av[1]));
	}
}
