/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinyoo <jinyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 21:00:09 by jinyoo            #+#    #+#             */
/*   Updated: 2021/04/07 23:55:35 by jinyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if(s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_bubble_sort(int argc, char **argv)
{
	int i;
	int j;
	char *temp;

	i = 0;
	while (i++ < argc)
	{
		j = 1;
		while (++j < argc)
		{
			if(ft_strcmp(argv[j - 1], argv[j]) < 0)
			{
				temp = argv[j - 1];
				argv[j - 1] = argv[j];
				argv[j] = temp;
			}
		}
	}
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	ft_bubble_sort(argc, argv);
	while (argv[++i])
	{
		j = 0;
		while(argv[i][j])
			write(1, &argv[i][j++], 1);
		write(1, "\n", 1);
	}
	return (0);
}
