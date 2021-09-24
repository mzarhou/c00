/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzarhou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 10:44:44 by mzarhou           #+#    #+#             */
/*   Updated: 2021/09/24 10:44:49 by mzarhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	show(char c, char d, char e, char f);
void	print(char c, char d, char e, char f);

void	ft_print_comb(void)
{
	char
		c;
	char
		d;
	char
		e;
	char
		f;

	c = '0';
	show(c, d, e, f);
}

void	show(char c, char d, char e, char f)
{
	while (c <= '9')
	{
		d = '0';
		while (d <= '9')
		{
			e = c;
			while (e <= '9')
			{
				f = d + 1;
				while (f <= '9')
				{
					print(c, d, e, f);
					f++;
				}
				e++;
			}
			d++;
		}
		c++;
	}
}

void	print(char c, char d, char e, char f)
{
	int	stop;
	int	max;

	max = '9' + '8' + '9' + '9';
	stop = (c + d + e + f) >= max;
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, " ", 1);
	write(1, &e, 1);
	write(1, &f, 1);
	if (!stop)
	{
		write(1, ", ", 2);
	}
}
