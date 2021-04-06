/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinyoo <jinyoo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 21:31:57 by jinyoo            #+#    #+#             */
/*   Updated: 2021/04/06 11:47:15 by jinyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (dest[len])
		len++;
	while (src[i])
		dest[len++] = src[i++];
	dest[len] = '\0';
	return (dest);
}
