/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinyoo <jinyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:25:49 by jinyoo            #+#    #+#             */
/*   Updated: 2021/04/12 18:39:56 by jinyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			check(char c, char *chrst)
{
	int i;

	i = 0;
	while (chrst[i])
	{
		if (c == chrst[i])
			return (1);
		i++;
	}
	return (0);
}

long long	ft_strcnt(char *str, char *chrst)
{
	long long str_cnt;

	str_cnt = 0;
	while (*str)
	{
		if (!check(*str, chrst))
		{
			str_cnt++;
			while (*str && !check(*str, chrst))
				str++;
		}
		str++;
	}
	return (str_cnt);
}

void		ft_strcpy(char *dest, char *start, char *end)
{
	while (start < end)
		*(dest++) = *(start++);
	*dest = 0;
}

void		split_handler(char **res, char *str, char *chrst)
{
	long long	idx;
	char		*start;

	idx = 0;
	while (*str)
	{
		if (!check(*str, chrst))
		{
			start = str;
			while (*str && !check(*str, chrst))
				str++;
			res[idx] = (char*)malloc(str - start + 1);
			ft_strcpy(res[idx++], start, str);
		}
		str++;
	}
	res[idx] = 0;
}

char		**ft_split(char *str, char *charset)
{
	char		**result;
	long long	str_cnt;

	str_cnt = ft_strcnt(str, charset);
	result = (char**)malloc(str_cnt + 1);
	split_handler(result, str, charset);
	return (result);
}
