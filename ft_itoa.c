/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-kurd <sal-kurd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 21:13:34 by sal-kurd          #+#    #+#             */
/*   Updated: 2022/01/07 09:56:47 by sal-kurd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	get_int_len(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		i++;
		return (i);
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	transform(char *str, unsigned int res, unsigned int sign)
{
	size_t	len;

	len = get_int_len(res);
	while (res >= 10)
	{
		str[--len + sign] = res % 10 + '0';
		res /= 10;
	}
	str[--len + sign] = res % 10 + '0';
	if (sign)
		str[len] = '-';
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	res;
	unsigned int	len;
	unsigned int	sign;

	sign = 0;
	if (n < 0)
	{
		res = -n;
		sign = 1;
	}
	else
		res = n;
	len = get_int_len(res);
	str = malloc(sizeof(char) * (len + 1 + sign));
	if (!str)
		return (NULL);
	str[len + sign] = 0;
	transform(str, res, sign);
	return (str);
}
/*#include <stdio.h>
int main(int ac, char **av){
	(void)ac;
	printf("%s\n", ft_itoa(atoi(av[1])));
}*/
