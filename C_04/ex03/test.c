#include <stdio.h>

int ft_atoi(char *str)
{
	int ret;
	int sign;

	ret = 0;
	sign = 1;
	while (*str == '\t' || *str == '\n' || \
			*str == '\v' || *str == '\f' \
			|| *str == '\r' || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
		if (*(str++) == '-')
			sign *= -1;
	while ('0' <= *str && *str <= '9')
	{
		ret *= 10;
		ret += (sign * (*(str++) - '0'));
	}
	return (ret);
}

int main(int ac, char **as)
{
	(void)ac;
	printf("%d", ft_atoi(as[1]));
	return (0);
}
