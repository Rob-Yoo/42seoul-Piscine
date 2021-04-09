/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinyoo <jinyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 23:24:56 by jinyoo            #+#    #+#             */
/*   Updated: 2021/04/09 23:52:19 by jinyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char		*cpy;
	long long	i;
	long long	len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	cpy = (char*)malloc(sizeof(char) * len + 1);
	while (src[i])
		cpy[i] = src[i++];
	cpy[i] = '\0';
	return (cpy);
}
