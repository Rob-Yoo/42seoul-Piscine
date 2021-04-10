/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinyoo <jinyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 23:25:39 by jinyoo            #+#    #+#             */
/*   Updated: 2021/04/10 12:28:40 by jinyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int len;

	if (min >= max)
		return (0);
	len = max - min;
	*range = (int*)malloc(sizeof(int) * len);
	if (!*range)
		return (-1);
	while (min < max)
		*(range++) = min++;
	return (len);
}
