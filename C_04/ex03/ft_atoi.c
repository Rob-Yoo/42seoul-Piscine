/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinyoo <jinyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 20:28:19 by jinyoo            #+#    #+#             */
/*   Updated: 2021/04/07 15:47:02 by jinyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' \
			|| c == '\v' || c == '\f' \
			|| c == '\r')
		return (1);
	return (0);
}

int		is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int num;
	int sign;

	num = 0;
	sign = 1;
	while (is_space(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*(str++) == '-')
			sign *= -1;
	}
	while (is_numeric(*str))
	{
		num *= 10;
		num += (sign * (*(str++) - '0'));
	}
	return (num);
}
