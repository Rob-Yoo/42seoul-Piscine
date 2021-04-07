/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinyoo <jinyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 20:28:31 by jinyoo            #+#    #+#             */
/*   Updated: 2021/04/07 18:07:49 by jinyoo           ###   ########.fr       */
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

	i = 0;
	if (*base == '\0')
		return (1);
	if (ft_strlen(base) == 1)
		return (1);
	while (base[i])
	{
		if (base[i] == base[i + 1])
			return (1);
		i++;
	}
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	return (0);
}

void	write_base(int mod, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (i == mod)
			write(1, &base[i], 1);
		i++;
	}
}

void	change_base(int nbr, int base_num, char *base)
{
	if (nbr / base_num == 0)
	{
		write_base(nbr, base);
		return ;
	}
	change_base(nbr / base_num, base_num, base);
	write_base(nbr % base_num, base);
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
		change_base(-nbr / base_num, base_num, base);
		write_base(-nbr % base_num, base);
	}
	else
	{
		change_base(nbr / base_num, base_num, base);
		write_base(nbr % base_num, base);
	}
}
