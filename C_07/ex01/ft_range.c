/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinyoo <jinyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 23:25:19 by jinyoo            #+#    #+#             */
/*   Updated: 2021/04/10 00:00:10 by jinyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *result;

	if (min >= max)
		return (0);
	result = (int*)malloc(sizeof(int) * ((long long)max - min));
	while (min < max)
		*(result++) = min++;
	return (result);
}
