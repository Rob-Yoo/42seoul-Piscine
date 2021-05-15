/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinyoo <jinyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 20:28:31 by jinyoo            #+#    #+#             */
/*   Updated: 2021/04/12 21:11:51 by jinyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *base)
{
	int len;

	len = 0;
	while (base[len])
		len++;
	return (len);
}

int		is_exception(char *base)
{
	int i;
	int j;

	i = 0;
	if (*base == '\0')
		return (1);
	if (ft_strlen(base) == 1)
		return (1);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j++])
				return (1);
		}
		i++;
	}
	i = -1;
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
	}
	return (0);
}

void	change_base(int nbr, int base_num, char *base)
{
	if (!nbr)
		return ;
	change_base(nbr / base_num, base_num, base);
	write(1, &base[nbr % base_num], 1);
	return ;
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_num;

	if (is_exception(base))
		return ;
	base_num = ft_strlen(base);
	if (nbr < 0)
	{
		write(1, "-", 1);
		change_base(-(nbr / base_num), base_num, base);
		write(1, &base[-(nbr % base_num)], 1);
	}
	else
	{
		change_base(nbr / base_num, base_num, base);
		write(1, &base[nbr % base_num], 1);
	}
}
