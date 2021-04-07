/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinyoo <jinyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:44:41 by jinyoo            #+#    #+#             */
/*   Updated: 2021/04/07 20:59:18 by jinyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;

	while (argc > 1)
	{
		i = 0;
		while (argv[argc - 1][i])
			write(1, &argv[argc - 1][i++], 1);
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
