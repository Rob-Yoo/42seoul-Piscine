/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinyoo <jinyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 21:32:28 by jinyoo            #+#    #+#             */
/*   Updated: 2021/04/07 02:04:35 by jinyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*a;
	int		i;

	a = str;
	i = 0;
	if (!*to_find)
		return (str);
	while (*str)
	{
		while (*to_find && a[i] == *to_find)
		{
			i++;
			to_find++;
		}
		if (!*to_find)
			return (str);
		str++;
		i++;
	}
	return (0);
}
