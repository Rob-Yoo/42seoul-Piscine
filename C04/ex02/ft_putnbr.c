/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinyoo <jinyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 20:28:05 by jinyoo            #+#    #+#             */
/*   Updated: 2021/04/06 21:34:39 by jinyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnbr(int n)
{
	char num;
	int			div;
	int			mod;

	div = n / 10;
	mod = n % 10;
	if (div == 0)
	{
		num = '0' + mod;
		write(1, &num, 1);
		return ;
	}
	else
	{
		putnbr(div);
		num = '0' + mod;
		write(1, &num, 1);
	}
	return ;
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		putnbr(-nb);
	}
	else
		putnbr(nb);
}
