/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tabs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinyoo <jinyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 03:31:02 by jinyoo            #+#    #+#             */
/*   Updated: 2021/04/12 14:37:04 by jinyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	write_size(int size)
{
	char c;

	if (size / 10 == 0)
	{
		c = size % 10 + '0';
		write(1, &c, 1);
		return ;
	}
	write_size(size / 10);
	c = size % 10 + '0';
	write(1, &c, 1);
	return ;
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i])
	{
		write(1, par[i].str, par[i].size);
		write(1, "\n", 1);
		if (!par[i].size)
			write(1, "0\n", 2);
		else
			write_size(par[i].size);
		write(1, "\n", 1);
		write(1, par[i].copy, par[i].size);
		i++;
	}
}
