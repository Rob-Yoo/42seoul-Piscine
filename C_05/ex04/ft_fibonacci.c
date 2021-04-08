/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinyoo <jinyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:58:18 by jinyoo            #+#    #+#             */
/*   Updated: 2021/04/08 13:35:22 by jinyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		fib_handler(int idx, int n1, int n2)
{
	if (idx == 0)
		return (n1);
	if (idx == 1)
		return (n2);
	return (fib_handler(idx - 1, n2, n1 + n2));
}

int		ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	return (fib_handler(index, 0, 1));
}
