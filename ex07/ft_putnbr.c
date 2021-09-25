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
#include <limits.h>

void	ft_putnbr(int nb);
void	put_char(char c);

void	put_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == INT_MIN)
	{
		put_char('-');
		put_char('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		put_char('-');
		ft_putnbr(-nb);
	}
	else if (nb < 10)
	{
		put_char(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
