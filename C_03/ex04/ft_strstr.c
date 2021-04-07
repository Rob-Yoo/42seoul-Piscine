/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinyoo <jinyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 21:32:28 by jinyoo            #+#    #+#             */
/*   Updated: 2021/04/07 14:59:37 by jinyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int tf_idx;
	int str_idx;
	int temp;

	str_idx = 0;
	if (!*to_find)
		return (str);
	while (*str)
	{
		tf_idx = 0;
		temp = str_idx;
		while (to_find[tf_idx] && str[temp] == to_find[tf_idx])
		{
			tf_idx++;
			temp++;
		}
		if (to_find[tf_idx] == '\0')
			return (str);
		str++;
		str_idx++;
	}
	return (0);
}

int main(void)
{
	char *c1 = "abdabc";
	char *c2 = "abc";
	printf("%s", ft_strstr(c1, c2));
	return (0);
}
