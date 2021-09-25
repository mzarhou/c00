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

void	print_char(char c);
void	ft_print_numbers(int a, int b);
void	ft_print_comb2(void);

void	print_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(int a, int b)
{
	print_char(a / 10 + '0');
	print_char(a % 10 + '0');
	print_char(' ');
	print_char(b / 10 + '0');
	print_char(b % 10 + '0');
	if (a != 98 || b != 99)
	{
		print_char(',');
		print_char(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_numbers(a, b);
			b++;
		}
		a++;
	}
}
