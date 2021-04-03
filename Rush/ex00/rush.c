/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinyoo <jinyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 20:42:06 by jinyoo            #+#    #+#             */
/*   Updated: 2021/04/03 16:31:08 by jinyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_one_to_four(char c);
int		is_blank_null(char c);

char numbers[16];
char column_up[4];
char column_down[4];
char row_left[4];
char row_right[4];

char	*numbers_array(char *views)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (views[i])
	{
		if (is_one_to_four(views[i]) && is_blank_null(views[i + 1]))
			numbers[j++] = views[i];
		i++;
	}
}

void	divide_views(char *views)
{
	int i;

	i = 0;
	numbers_array(views);
	while (numbers[i])
	{
		if (i < 4)
			column_up[i] = numbers[i];
		else if(i >= 4 && i < 8)
			column_down[i - 4] = numbers[i];
		else if (i >= 8 && i < 12)
			row_left[i - 8] = numbers[i];
		else
			row_right[i - 12] = numbers[i];
		i++;
	}
}

void	rush(char *views)
{
	divide_views(views);
}
