/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinyoo <jinyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:59:00 by jinyoo            #+#    #+#             */
/*   Updated: 2021/04/08 15:40:33 by jinyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_prime(int n)
{
	int i;

	if (n == 0 || n == 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	i = 2;
	while (i != n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (!is_prime(nb))
		nb++;
	return (nb);
}
