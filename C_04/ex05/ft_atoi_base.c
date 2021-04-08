/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinyoo <jinyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 18:13:05 by jinyoo            #+#    #+#             */
/*   Updated: 2021/04/08 23:47:57 by jinyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_space(char c)
{
	if (c == '\n' || c == '\t' || c == '\v' \
			|| c == ' ' || c == '\r' \
			|| c == '\f')
		return (1);
	return (0);
}

int		is_exception(char *base)
{
	int i;
	int j;

	i = 0;
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
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		if (is_space(base[i]))
			return (1);
		i++;
	}
	return (0);
}

int		atoi_handler(char *str, char *base, int base_num)
{
	int idx;
	int num;
	int flag;

	num = 0;
	while (*str)
	{
		flag = 0;
		idx = 0;
		while (base[idx])
		{
			if (base[idx] == *str)
			{
				flag = 1;
				num *= base_num;
				num += idx;
				str++;
			}
			idx++;
		}
		if (flag == 0)
			break ;
	}
	return (num);
}

int		ft_atoi_base(char *str, char *base)
{
	int num;
	int sign;
	int base_num;

	num = 0;
	sign = 1;
	base_num = 0;
	if (is_exception(base) || *base == 0)
		return (0);
	while (base[base_num])
		base_num++;
	if (base_num == 1)
		return (0);
	while (is_space(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*(str++) == '-')
			sign *= -1;
	}
	return (sign * atoi_handler(str, base, base_num));
}
