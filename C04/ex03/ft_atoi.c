/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinyoo <jinyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 20:28:19 by jinyoo            #+#    #+#             */
/*   Updated: 2021/04/06 23:57:28 by jinyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' \
			|| c == '\v')
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
	int cnt;

	num = 0;
	cnt = 0;
	while (*str)
	{
		if (is_space(*str++))
			continue ;
		if (*str++ == '-')
		{
			cnt++;
			continue ;
		}
		if (is_numeric(*str))
		{
			num *= 10;
			num += *str++ - '0';
		}
		else
			break ;
	}
	if (cnt % 2 != 0)
		num *= -1;
	return (num);
}
