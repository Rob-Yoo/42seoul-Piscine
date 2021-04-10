/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinyoo <jinyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 23:25:59 by jinyoo            #+#    #+#             */
/*   Updated: 2021/04/10 13:22:49 by jinyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcat(char *s1, char *s2)
{
	while (*s2)
		*(s1++) = *(s2++);
	return (s1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	char	*temp;
	int		i;
	int		strs_len;

	if (size == 0)
	{
		result = (char*)malloc(1);
		result[0] = 0;
		return (result);
	}
	i = 0;
	strs_len = 0;
	while (i < size)
		strs_len += ft_strlen(strs[i++]);
	result = (char*)malloc(strs_len + (size - 1) * ft_strlen(sep) + 1);
	temp = ft_strcat(result, strs[0]);
	i = 1;
	while (i < size)
	{
		temp = ft_strcat(temp, sep);
		temp = ft_strcat(temp, str[i++]);
	}
	*temp = 0;
	return (result);
}
