/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-kurd <sal-kurd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:28:38 by sal-kurd          #+#    #+#             */
/*   Updated: 2022/01/02 14:20:03 by sal-kurd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n >= 10 && n != -2147483648)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else if (n < 10 && n != -2147483648)
		ft_putchar_fd(n + '0', fd);
}

/*int main(int ac, char **av)
{
	printf("value before function call %d\n", atoi(av[1]));
	ft_putnbr_fd(atoi(av[1]), 1);
	ft_putchar_fd('\n', 1);
}*/