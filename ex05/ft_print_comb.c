/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzarhou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 10:22:21 by mzarhou           #+#    #+#             */
/*   Updated: 2021/09/24 10:22:24 by mzarhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	print(int show_comma, char a, char b, char c);
void	show(char c, char d, char e, int show_comma);

void	ft_print_comb(void)
{
	int	show_comma;
	char
		c;
	char
		d;
	char
		e;

	show_comma = 0;
	c = '0';
	d = c + 1;
	e = d + 1;
	show(c, d, e, show_comma);
}

void	show(char c, char d, char e, int show_comma)
{
	while (c <= '9')
	{
		d = c + 1;
		while (d <= '9')
		{
			e = d + 1;
			while (e <= '9')
			{
				print(show_comma, c, d, e);
				show_comma = 1;
				e++;
			}
			d++;
		}
		c++;
	}
}

void	print(int show_comma, char a, char b, char c)
{
	if (show_comma)
	{
		write(1, ", ", 2);
	}
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}
