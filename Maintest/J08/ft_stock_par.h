/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukrifa <oukrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 11:13:17 by oukrifa           #+#    #+#             */
/*   Updated: 2017/03/21 19:42:30 by oukrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H
# define SEP 1
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_stock_par
{
	int			size_param;
	char		*str;
	char		*copy;
	char		**tab;
}				t_stock_par;

char					**ft_split_whitespaces(char *str);
struct s_stock_par		*ft_param_to_tab(int ac, char **av);

void					ft_putchar(char c);
void					ft_print_words_tables(char **tab);
void					ft_show_tab(t_stock_par *par);

#endif
