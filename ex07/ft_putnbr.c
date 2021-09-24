/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzarhou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 10:45:24 by mzarhou           #+#    #+#             */
/*   Updated: 2021/09/24 10:45:27 by mzarhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	int	result;
	int	number_of_digit;
	char
		ch;
	int	oldval ;
	int	i;

	result = (int) nb / 10;
	oldval = 0;
	number_of_digit = 0;
	i = number_of_digit;
	while (result > 0)
	{
		number_of_digit++;
		result = result / 10;
	}
	while (i >= 0)
	{
		ch = (nb / (int)pow(10, i) - oldval * 10) + '0';
		oldval = nb / (int)pow(10, i);
		write(1, &ch, 1);
		i--;
	}
}
