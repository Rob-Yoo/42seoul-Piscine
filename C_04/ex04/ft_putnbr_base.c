/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinyoo <jinyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 20:28:31 by jinyoo            #+#    #+#             */
/*   Updated: 2021/04/07 16:09:39 by jinyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_double(char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == base[i + 1])
			return (1);
		i++;
	}
	return (0);
}

int		ft_strlen(char *base)
{
	int len;

	len = 0;
	while (base[len])
		len++;
	return (len);
}

int		is_exception(char *base)
{
	int i;

	i = 0;
	if (*base == '\0')
		return (1);
	if (ft_strlen(base) == 1)
		return (1);
	if (is_double(base))
		return (1);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (is_exception(base))
		return ;

}
