/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinyoo <jinyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:27:56 by jinyoo            #+#    #+#             */
/*   Updated: 2021/04/07 20:33:29 by jinyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **args)
{
	int i;

	i = 0;
	(void)argc;
	while (args[0][i])
	{
		write(1, &args[0][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
