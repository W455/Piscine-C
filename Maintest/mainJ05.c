/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukrifa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 11:51:01 by oukrifa           #+#    #+#             */
/*   Updated: 2017/03/16 17:00:29 by oukrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void				ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str);
void	ft_putnbr(int n);
int			ft_atoi(char *str);
char	*ft_strcpy(char *dst, char *src);
char	*ft_strncpy(char *dst, char *src, unsigned int n);
char	*ft_strstr(char *str, char *to_find);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);
int				ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_printable(char *str);
char	*ft_strcat(char *s1, char *s2);
char	*ft_strncat(char *s1, char *s2, int n);
unsigned int			ft_strlcat(char *dst,  char *src, unsigned int size);
unsigned int			ft_strlcpy(char *dst,  char *src, unsigned int size);
void			ft_putnbr_base(int n, char *base);
int				ft_atoi_base(char *str, char *base);
void	ft_putstr_non_printable(char *str);

int		main(int ac, char **av)
{
	char tr[1];
	tr[0] = 31;
	char str[20] = "Hallo";
	char str1[20] = "Hallo";
	char str2[] = "Hello\n";
	str2[0] = 30;
	if (ac >= 3)
	{
		if (atoi(av[1]) == 0)
			ft_putstr(av[2]);
		if (atoi(av[1]) == 1)
			ft_putnbr(atoi(av[2]));
		if (atoi(av[1]) == 2)
			ft_putnbr(ft_atoi(av[2]));
		if (atoi(av[1]) == 3 && ac >= 4)
			printf("Ex 03 : strcpy : %s\nft_strcpy : %s", strcpy(av[2], av[3]), ft_strcpy(av[2], av[3]));
		if (atoi(av[1]) == 4 && ac >= 5)
			printf("Ex 04 : strncpy : %s\nft_strncpy : %s", strncpy(av[2], av[3], atoi(av[4])), ft_strncpy(av[2], av[3], atoi(av[4])));
		if (atoi(av[1]) == 5 && ac >= 4)
			printf("Ex 05 : strstr? => %s\nft-strstr? => %s", strstr(av[2], av[3]), ft_strstr(av[2], av[3]));
		if (atoi(av[1]) == 6 && ac >= 4)
			printf("Ex 06 : strcmp = %d\nft_strcmp = %d", strcmp(av[2], av[3]), ft_strcmp(av[2], av[3]));
		if (atoi(av[1]) == 7 && ac >= 5)
			printf("Ex 07 : strncmp = %d\nft_strncmp = %d", strncmp(av[2], av[3], atoi(av[4])), ft_strncmp(av[2], av[3], atoi(av[4])));
		if (atoi(av[1]) == 8)
			printf("Ex 08 : Upcase %s => %s", av[2], ft_strupcase(av[2]));
		if (atoi(av[1]) == 9)
			printf("Ex 09 : Lowcase %s => %s", av[2], ft_strlowcase(av[2]));
		if (atoi(av[1]) == 10)
			printf("Ex 10 : Capitalize %s", ft_strcapitalize(av[2]));
		if (atoi(av[1]) == 11)
			printf("Ex 11 : \"%s\" is alpha ? => %d", av[2], ft_str_is_alpha(av[2]));
		if (atoi(av[1]) == 12)
			printf("Ex 12 : \"%s\" is numeric ? => %d", av[2], ft_str_is_numeric(av[2]));
		if (atoi(av[1]) == 13)
			printf("Ex 13 : \"%s\" is Lowcase ? => %d", av[2], ft_str_is_lowercase(av[2]));
		if (atoi(av[1]) == 14)
			printf("Ex 14 : \"%s\" is Upcase ? => %d", av[2], ft_str_is_uppercase(av[2]));
		if (atoi(av[1]) == 15)
			printf("Ex 15 : \"%s\" is printable ? => %d", av[2], ft_str_is_printable(tr));
		if (atoi(av[1]) == 16 && ac >= 4)
			printf("Ex 16 : %s && %s => cat %s", av[2], av[3], strcat(str, av[3]));
		if (atoi(av[1]) == 16 && ac >= 4)
			printf("\n %s && %s => ft_cat %s", av[2], av[3], ft_strcat(str1, av[3]));
		if (atoi(av[1]) == 17 && ac >= 5)
			printf("Ex 17 : %s && %s => ncat %s", av[2], av[3], strncat(str, av[3], atoi(av[4])));
		if (atoi(av[1]) == 17 && ac >= 5)
			printf("\n %s && %s => ft_ncat %s", av[2], av[3], ft_strncat(str1, av[3], atoi(av[4])));
		if (atoi(av[1]) == 18 && ac >= 5)
			printf("Ex 18 : %s && %s => lcat %lu", av[2], av[3], strlcat(str, av[3], atoi(av[4])));
		if (atoi(av[1]) == 18 && ac >= 5)
			printf("\n %s && %s => ft_lcat %u", av[2], av[3], ft_strlcat(str1, av[3], atoi(av[4])));
		if (atoi(av[1]) == 19 && ac >= 5)
			printf("Ex 18 : %s && %s => lcpy %lu", av[2], av[3], strlcpy(str, av[3], atoi(av[4])));
		if (atoi(av[1]) == 19 && ac >= 5)
			printf("\n %s && %s => ft_lcpy %u", av[2], av[3], ft_strlcpy(str1, av[3], atoi(av[4])));
		if (atoi(av[1]) == 20 && ac >= 4)
			ft_putnbr_base(atoi(av[2]), av[3]);
		if (atoi(av[1]) == 21 && ac >= 4)
			printf("%d", ft_atoi_base(av[2], av[3]));
	}
	if (atoi(av[1]) == 22)
		ft_putstr_non_printable(str2);
	return (0);
}
