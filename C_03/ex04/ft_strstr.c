/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinyoo <jinyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 21:32:28 by jinyoo            #+#    #+#             */
/*   Updated: 2021/04/07 16:15:59 by jinyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int tf_idx;
	int str_idx;

	if (!*to_find)
		return (str);
	while (*str)
	{
		tf_idx = 0;
		str_idx = 0;
		while (to_find[tf_idx] && str[str_idx] == to_find[tf_idx])
		{
			tf_idx++;
			str_idx++;
		}
		if (to_find[tf_idx] == '\0')
			return (str);
		str++;
	}
	return (0);
}
