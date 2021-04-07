/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinyoo <jinyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 18:13:05 by jinyoo            #+#    #+#             */
/*   Updated: 2021/04/07 20:25:48 by jinyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_num = 0;

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
	while (base[i])
	{
		if (base[i] == base[i + 1])
			return (1);
		i++;
	}
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		if (base[i] == ' ' || base[i] == '\n' || \
				base[i] == '\t' || base[i] \
				== '\v' || base[i] == '\r')
			return (1);
		i++;
	}
	return (0);
}

void	change_base(int num, int base_num, char *base)
{
	if (nbr / base_num == 0)
	{
		n += num - '0';	
		return n;
	}
	change_base(nbr / base_num, base_num, base); 
}

int		base_handler(int num, char *base)
{
	int base_num;
	int n;

	n = 0;
	base_num = ft_strlen(base);
	if (num < 0)
	{
		change_base(-num / base_num, base_num, base);
		write_base(-num % base_num, base);
	}
	else
	{
		change_base(num / base_num, base_num, base);
		write_base(num % base_num, base);
	}	

int		ft_atoi_base(char *str, char *base)
{
	int num;
	int sign;

	num = 0;
	sign = 1;
	if (is_exception(base))
		return (0);
	while (*str == ' ' || *str == '\n' || \
			*str == '\t' || *str == \
			'\v' || *str == '\r')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*(str++) == '-')
			sign *= -1;
	}
	while (*str >= '0' && *str <= '9')
	{
		num *= 10;
		num += sign * (*(str++) - '0');
	}
	return (base_handler(num, base));
}
